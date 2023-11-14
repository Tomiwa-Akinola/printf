#include "main.h"

/**
 * printf_char - prints character
 * @mag: argument
 * Return: 1
 */

int printf_char(va_list mag)
{
	char str;

	str = va_arg(mag, int);
	_putchar(str);
	return (1);
}
