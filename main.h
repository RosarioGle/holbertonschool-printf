#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct spe - structur that determine the conversion specifier
 * and the corresponding function
 *
 * @spe: the conversion specifier
 * @f: the function pointer that calls the corresponding function
 */

typedef struct handler
{
	char specifier;
	int (*function)(va_list args);
} handler_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int _strlen(char *s);
int print_percentage(va_list args __attribute__((unused)));
int print_decimal(va_list args);
void _recur_int(int n);

#endif
