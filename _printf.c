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
	while (format[b] != '\0')
	{
		if (format[b] == '%')
		{
			b++;
			a = 0;
			while (specifiers[a].specifier != '\0')
			{
				if (specifiers[a].specifier == format[b])
				{
					len += specifiers[a].function(args);
					break;
				}
				a++;
			}
			if (specifiers[a].specifier == '\0')
			{
				print_unknown(format[b]);
				len += 2;
			}
		} else
		{
			_putchar(format[b]);
			len++;
		}
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
