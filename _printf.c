#include "main.h"

/**
 * _printf - a function that simulates printf
 *
 * @format: the character string
 *
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0, i = 0, j;
	handler_t specifiers[] = {
		{'%', print_percentage},
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(ap, format);

	// Check for null format string or invalid case of a single '%'
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	// Iterate through the format string
	while (format[i] != '\0')
	{
		// Check if the current character is '%'
		if (format[i] == '%')
		{
			i++; // check character after %
			j = 0;

			// Search for the matching specifier in the specifiers array
			while (specifiers[j].specifier != '\0' && specifiers[j].specifier != format[i])
				j++;

				// if the specifier matches, the associated function is called
				if (specifiers[j].specifier == format[i])
					count += specifiers[j].function(ap);
				else
            	{
				// Handle invalid specifier by printing '%' and the character
                write(1, "%", 1);
                write(1, &format[i], 1);
                count += 2;
            	}
		}
		// If the character is not a '%', write it directly
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		// Move to the next character in the format string
		i++;
	}

	va_end(ap);
	return (count);
}
