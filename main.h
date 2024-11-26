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

typedef struct spe
{
	char spe;
	int (*f)(va_list speci);
} spe_t;

int _putchar(char c);
int _printf(const char *format, ...);
int get_spe(const char *format, va_list speci);
int print_char(va_list speci);
int print_string(va_list speci);
int _strlen(char *s);
int print_percentage(va_list speci __attribute__((unused)));
int print_decimal(va_list speci);
void _recur_int(int n);

#endif
