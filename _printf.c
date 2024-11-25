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
	int len = 0;
	va_list speci;

	va_start(speci, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	len = get_spe(format, speci);
	va_end(speci);
	return (len);
}
