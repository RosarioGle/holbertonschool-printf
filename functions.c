#include "main.h"

/**
 * print_percentage - print the percentage character
 */

int print_percentage(va_list ap __attribute__((unused))) // parameter ap deliberately not used
{
	int length = 1;

	write(1, "%", 1);

	return (length);
}

/**
 * print_char - print a char
 */
int print_char(va_list ap) // ap means argument pointer
{
	int length = 1;
	char c = va_arg(ap, int); // store an argument of type int from the variadic list ap

	write(1, &c, length);

	return (length);
}

/**
 * print_string - print a string
 */
int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int length = 0;

	if (str == NULL)
		str = "(nil)";

	while (str[length]) // calculate the length of the string
		length++;

	write(1, str, length);
		
	return (length);
}
