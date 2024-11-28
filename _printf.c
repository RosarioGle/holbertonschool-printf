#include "main.h"

/**
 * get_spe - selects the corresponding function
 *
 * @format: the specifier string
 * @args: the list
 *
 * Return: the numer of character printed
 */

int get_spe(const char *format, va_list args)
{
	int a;
	int len = 0, b = 0;
	handler_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{'d', print_decimal},
		{'i', print_decimal},
		{'\0', NULL}
	};
	/* Iterate through the format string */
	while (format[b] != '\0')
	{
		/* Check if the current character is '%' */
		if (format[b] == '%')
		{
			/* check character after % */
			b++;
			a = 0;
			/* Search for the matching specifier in the specifiers array */
			while (specifiers[a].specifier != '\0')
			{
				/* if the specifier matches, the associated function is called */
				if (specifiers[a].specifier == format[b])
				{
					len += specifiers[a].function(args);
					break;
				}
				a++;
			}
			if (specifiers[a].specifier == '\0')
			{
				_putchar('%');
				_putchar(format[b]);
				len += 2;
			}

		}
		/* If the character is not a '%', write it directly */
		else
		{
			_putchar(format[b]);
			len++;
		}
		/* Move to the next character in the format string */
		b++;
	}
	return (len);
}

/**
 * _printf - print all
 *
 * @format: the character string
 *
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	int len = 0;
	va_list args;

	va_start(args, format);
	/* Check for null format string or invalid case of a single '%' */
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	/* obtains the length of printed characters */
	len = get_spe(format, args);
	va_end(args);
	return (len);
}
