#include "main.h"

/**
 * print_percentage - print the percentage character
 */

int print_percentage(va_list speci __attribute__((unused)))
{
	int len = 1;

	_putchar('%');
	return (len);
}

/**
 * print_char - print a char
 */
int print_char(va_list speci)
{
	int length = 1;
	char c = va_arg(speci, int);

	_putchar(c);

	return (length);
}

/**
 * print_string - print a string
 */
int print_string(va_list speci)
{
	char *str = va_arg(speci, char *);
	int length = 0;
	int i;

	if (!str)
		str = "(nil)";
	else 
	length = _strlen(str);

	for (i = 0; i < length; i++)
		_putchar(str[i]);
		
	return (length);
}

/**
 * _strlen - get the length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
