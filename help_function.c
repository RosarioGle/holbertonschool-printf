#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - get the length of a string
 *
 * @s: the string
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * print_unknown - print unknown specifiers
 *
 * @spe: the unknown specifier
 */

void print_unknown(char spe)
{
	_putchar('%');
	_putchar(spe);
}
