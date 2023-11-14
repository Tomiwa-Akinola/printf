#include "main.h"
/**
 * print_some_string - print exclusive string.
 * @value: parameter.
 * Return: integer.
 */

int print_some_string(va_list value)
{
	char *s;
	int i, length = 0;
	int mag;

	s = va_arg(value, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			mag = s[i];
			if (mag < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_hexa_ex(mag);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}
	return (length);
}
