#include "main.h"

/**
 * print_char - print a char
 *
 * @speci: the list
 *
 * Return: the number of character printed
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
 *
 * @speci: the list
 *
 * Return: the number of character printed
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
 * print_percentage - print the percentage chracter
 *
 * @speci: the list
 *
 * Return: the number of character printed
 */

int print_percentage(va_list speci __attribute__((unused)))
{
	int len = 1;

	_putchar('%');
	return (len);
}

/**
 * print_decimal - print a decimal
 *
 * @speci: the list
 *
 * Return: the number of character printed
 */

int print_decimal(va_list speci)
{
	int len = 1;
	int cpy;
	cpy = va_arg(speci, int);
	if (cpy < 0)
	{
		cpy = -cpy;
		_putchar('-');
		len++;
	}
	_recur_int(cpy);
	while (cpy > 9)
	{
		cpy = cpy / 10;
		len++;
	}
	return (len);
}

/**
 * _recur_int - print an integer with recursion
 *
 * @n: the integer to print
 */

void _recur_int(int n)
{
        if (n / 10)
        {
                _recur_int(n / 10);
        }
        _putchar(n % 10 + '0');
}
