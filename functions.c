#include "main.h"

/**
 * print_percentage - print the percentage character
 * 
 * @ap: a list of arguments
 * 
 * Return: the 
 */

int print_percentage(va_list ap __attribute__((unused)))
{
	int length = 1;

	write(1, "%", 1);

	return (length);
}

/**
 * print_char - print a char
 * 
 * @ap: a list of arguments
 * (ap means argument pointer)
 * 
 * Return: 
 */
int print_char(va_list ap)
{
	int length = 1;
	/* Store an argument of type int from the variadic list ap */
	char c = va_arg(ap, int);

	write(1, &c, length);

	return (length);
}

/**
 * print_string - print a string
 * 
 * @ap: a list of argument
 * 
 * Return: 
 */
int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int length = 0;

	if (str == NULL)
		str = "(nil)";

	/* Calculate the length of the string */
	while (str[length])
		length++;

	write(1, str, length);
		
	return (length);
}
