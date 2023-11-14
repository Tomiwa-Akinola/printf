#include "main.h"

/**
 * print_pointer - prints an hexadecimal number.
 * @value: arguments.
 * Return: counter.
 */
int print_pointer(va_list value)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	p = va_arg(value, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_hexad_ex(x);
	return (y + 2);
}
