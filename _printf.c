#include "main.h"

/**
 * _printf - a function that simulates printf
 *
 * @format: a string of characters
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int length = 0;
	va_list ap;

	va_start(ap, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	length = get_specifier(format, ap);
	va_end(ap);
	return (length);
}
