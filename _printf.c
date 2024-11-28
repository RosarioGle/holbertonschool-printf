#include "main.h"

/**
 * get_specifier - checks for a specifier
 * and selects the corresponding function
 *
 * @format: the character string
 * @ap: a variadic list of arguments
 *
 * Return: the number of character printed
 */

int get_specifier(const char *format, va_list ap)
{
	int count = 0, i = 0, j;
	handler_t specifiers[] = {
		{'%', print_percentage},
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}
	};
	/* Iterate through the format string */
	while (format[i] != '\0')
	{
		/* Check if the current character is '%' */
		if (format[i] == '%')
		{
			i++; /* Check the character after '%' */
			j = 0;

			/* Search for the matching specifier in the specifiers array */
			while (specifiers[j].specifier != '\0' && specifiers[j].specifier != format[i])
				j++;

				/* If the specifier matches, the associated function is called */
				if (specifiers[j].specifier == format[i])
					count += specifiers[j].function(ap);
		}
		/* If the character is not a '%', write it directly */
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		/* Move to the next character in the format string */
		i++;
	}

	return (count);
}

/**
 * _printf - a function that simulates printf
 *
 * @format: the character string
 *
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list ap;

	va_start(ap, format);

	/* Check for null format string or invalid case of a single '%' */
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	count = get_specifier(format, ap);

	va_end(ap);
	return (count);
}
