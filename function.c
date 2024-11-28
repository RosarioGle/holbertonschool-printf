#include "main.h"

/**
 * print_char - print a char
 *
 * @args: the list
 *
 * Return: the number of character printed
 */

int print_char(va_list args)
{
	int length = 1;
	/* store an argument of type int from the variadic list args */
	char c = va_arg(args, int);

	_putchar(c);

	return (length);
}

/**
 * print_string - print a string
 *
 * @args: the list
 *
 * Return: the number of character printed
 */

int print_string(va_list args)
{
	/* store an argument of type char * from the variadic list args */
	char *str = va_arg(args, char *);
	int length = 0;
	int i;

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		length = 6;
		return (length);
	}
	else
	{
		/* calculate the length of the string */
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}

/**
 * print_percentage - print the percentage chracter
 *
 * @args: the list
 *
 * Return: the number of character printed
 */

int print_percentage(va_list args __attribute__((unused)))
{
	int len = 1;

	_putchar('%');
	return (len);
}

/**
 * print_decimal - print a decimal
 *
 * @args: the list
 *
 * Return: the number of character printed
 */

int print_decimal(va_list args)
{
	int len = 1;
	int cpy;

	/* store an argument of type int from the variadic list args */
	cpy = va_arg(args, int);
	/* converts the number to positive and prints the character '-' */
	if (cpy < 0)
	{
		cpy = -cpy;
		_putchar('-');
		len++;
	}
	_recur_int(cpy);
	/* calculate the length of the number */
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
	/* divide the number by 10 until it is no longer divisible by 10 */
	if (n / 10)
	{
		_recur_int(n / 10);
	}
	/* print the last number of the number */
	_putchar(n % 10 + '0');
}
