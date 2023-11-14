#include "main.h"

/**
 * print_rev - function that prints a str in reverse
 * @mag: type struct va_arg *
 * Return: string
 */
int print_rev(va_list mag)
{

	char *s = va_arg(mag, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
