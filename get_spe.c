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
		{'d', print_decimal},
		{'i', print_decimal},
		{'%', print_percentage},
		{'\0', NULL}
	};
	while (format != NULL && format[b] != '\0')
	{
		if (format[b] == '%' && (format[b + 1] != 'K' && format[b + 1] != '!'))
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
