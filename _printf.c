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
	int len = 0, i = 0;
	int j;
	spe_t spc = {
		{'%', print_percentage},
		{'\0', NULL}
	};
	while (format != NULL && format[i] != '\0')
	{
		if (format[i + 1] != '\0')
		{
			i++;
			j = 0;
			while (spc[j].spe != '\0')
			{
				if (spc[j].spe == format[i])
					len += spc[i].f(speci);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
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
	if (format == NULL || format[0] == '%' && format[1] == '\0')
		return (-1);
	len = get_spe(format, speci);
	va_end(speci);
	return (len);
}
