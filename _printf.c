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
	handler_t specifiers[] = { // specifiers is an array of handler_t structures
		{'%', print_percentage},
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL} // indicates the end
	};

	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++; // check character after %
			j = 0;
			while (specifiers[j].specifier != '\0' && specifiers[j].specifier != format[i])
				j++;

				if (specifiers[j].specifier == format[i]) // if the specifier matches, the associated function is called
					count += specifiers[j].function(ap);
				else
            	{
                write(1, "%", 1);
                write(1, &format[i], 1);
                count += 2;
            	}
		}
		else // the character is not %
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}

	va_end(ap);
	return (count);
}
