#include "main.h"

/**
 * printf_string - prints string
 * @mag: argument
 * Return: length of string
 */

int printf_string(va_list mag)
{
	char *str;
	int i, len;

	str = va_arg(mag, char *);

	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar (str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
