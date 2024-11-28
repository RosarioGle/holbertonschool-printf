#include "main.h"

/**
 * _printf - print all
 *
 * @format: the character string
 *
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	int len = 0, i = 0;
	int j;
	va_list args;

	handler_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{'d', print_decimal},
                {'i', print_decimal},
		{'\0', NULL}
	};
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (specifiers[j].specifier != '\0' && specifiers[j].specifier != format[i])
				j++;
			if (specifiers[j].specifier == format[i])
				len += specifiers[j].function(args);
			else
			{
				_putchar('%');
				_putchar(format[i]);
				len += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
