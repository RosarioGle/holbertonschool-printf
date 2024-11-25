#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct spe
{
	char spe;
	int (*f)(va_list speci);
} spe_t;

int _putchar(char c);
int _printf(const char *format, ...);
int get_spe(const char *format, va_list speci);
int print_percentage(va_list speci __attribute__((unused)));
int print_decimal(va_list speci);
void _recur_int(int n);

#endif
