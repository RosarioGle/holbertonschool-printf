#include "main.h"

/**
 * _recur_int - print an integer with recursion
 *
 * @n: the integer to print
 */

void _recur_int(int n)
{
	unsigned int a;

	a = n;
	if (a / 10)
	{
		_recur_int(a / 10);
	}
	_putchar(a % 10 + '0');
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
	unsigned int n;

	n = va_arg(speci, int);
	cpy = n;
	if (cpy < 0)
	{
		_putchar('-');
		cpy = -cpy;
		n = cpy;
		len++;
	}
	for (; n > 9; n /= 10)
	{
		len++;
	}
	_recur_int(cpy);
	return (len);
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
