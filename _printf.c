#include "main.h"

/**
 * get_spe - selects the corresponding function
 *
 * @format: the specifier string
 * @speci: the list
 *
 * Return: the numer of character printed
 */

int get_spe(const char *format, va_list speci)
{
	int a;
	int len = 0, b = 0;
	spe_t spc[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{'d', print_decimal},
		{'i', print_decimal},
		{'\0', NULL}
	};
	while (format != NULL && format[b] != '\0')
	{
		if (format[b] == '%')
		{
			b++;
			a = 0;
			while (spc[a].spe != '\0')
			{
				if (spc[a].spe == format[b])
					len += spc[a].f(speci);
				a++;
			}
		}
		else
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
	va_list speci;

	va_start(speci, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	len = get_spe(format, speci);
	va_end(speci);
	return (len);
}
