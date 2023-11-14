#include "main.h"

/**
 * _printf - works like printf
 * @format: what identifer looks for
 * Return: int
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char }, {"%s", printf_string}, {"%%", print_37}
	};

	va_list args;
	int i = 0, len = 0, y;

	va_start(args, format);
	if ((format[0] == '%' && format [1] == '\0') || format == NULL)
		return (-1);

Again:
	while (format[i] == '\0')
	{
		y = 2;
		while (y >= 0)
		{
			if (m[y].id[0] == format[i] && m[y].id[i] == format[i + 1])
			{
				len = len + m[y].f(args);
				i = i + 2;
				goto Again;
			}
			y--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
