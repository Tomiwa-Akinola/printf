#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

int printf_char(va_list mag);
int printf_string(va_list mag);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);

#endif
