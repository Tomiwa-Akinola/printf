#include "main.h"
/**
 * print_integer - prints integer
 * @mag: argument to print
 * Return: integer
 */
int print_integer(va_list mag)
{
	int n = va_arg(mag, int);
	int num, last = n % 10, digit, epected = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			epected = epected * 10;
			num = num / 10;
		}
		num = n;
		while (epected > 0)
		{
			digit = num / epected;
			_putchar(digit + '0');
			num = num - (digit * epected);
			epected = epected / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * print_decimal - prints decimal
 * @mag: argument to print
 * Return: integer
 */

int print_decimal(va_list mag)
{
	int n = va_arg(mag, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int epected = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			epected = epected * 10;
			num = num / 10;
		}
		num = n;
		while (epected > 0)
		{
			digit = num / epected;
			_putchar(digit + '0');
			num = num - (digit * epected);
			epected = epected / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

