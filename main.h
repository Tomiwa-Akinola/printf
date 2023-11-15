#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} dsame;

int _putchar(char c);
int _printf(const char *format, ...);
int print_integer(va_list mag);
int print_decimal(va_list mag);
int printf_char(va_list mag);
int printf_string(va_list mag);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_binary(va_list value);
int print_unsignedint(va_list mag);
int print_octal(va_list value);
int print_hexa(va_list value);
int print_hexad(va_list value);
int print_some_string(va_list value);
int print_hexa_ex(unsigned int number);
int print_pointer(va_list value);
int print_hexad_ex(unsigned long int num);
int print_rev(va_list mag);
int print_rot13(va_list mag);
int get_width(const char *format, int *i, va_list list);
int get_flags(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
#endif
