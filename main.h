#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct handler
{
	char specifier;
	int (*function)(va_list ap);
} handler_t;

int _printf(const char *format, ...);
int get_specifier(const char *format, va_list ap);
int print_percentage(va_list ap __attribute__((unused)));
int print_char(va_list ap);
int print_string(va_list ap);

#endif
