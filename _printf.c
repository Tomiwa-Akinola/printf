#include "main.h"
/**
 * _printf - function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the len of the string.
 */
int _printf(const char * const format, ...)
{
	dsame p[] = {
		{"%c", printf_char}, {"%s", printf_string},
		{"%%", print_37}, {"%d", print_decimal},
		{"%i", print_integer}, {"%b", print_binary},
		{"%u", print_unsignedint}, {"%o", print_octal},
		{"%x", print_hexa}, {"%X", print_hexad},
		{"%r", print_rev}, {"%R", print_rot13},
		{"%S", print_some_string}, {"%p", print_pointer}
	};

	va_list mag;
	int i = 0, j, len = 0;

	va_start(mag, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				len += p[j].function(mag);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(mag);
	return (len);
}
