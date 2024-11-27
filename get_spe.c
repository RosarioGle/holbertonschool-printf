#include "main.h"

/**
 * get_specifier - Processes a format string and prints output
 * based on the corresponding format specifiers
 * 
 * @format: The format string containing characters and specifiers
 * @ap: The list of arguments for the format specifiers
 *
 * Return: The total number of characters printed.
 */

int get_specifier(const char *format, va_list ap)
{
	int length = 0, i = 0, j;
	handler_t specifiers[] = { // specifiers is an array of handler_t structures
		{'%', print_percentage},
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL} // indicates the end
	};

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++; // check character after %
			j = 0;
			while (specifiers[j].specifier != '\0')
			{
				if (specifiers[j].specifier == format[i]) // if the specifier matches, the associated function is called
					length += specifiers[j].function(ap);
				j++; // increment specifier  up to '\0' or a matching specifier
			}
		}
		else // the character is not %
		{
			write(1, &format[i], 1);
			length++;
		}
		i++;
	}
	return (length);
}
