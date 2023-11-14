#include "main.h"

/**
 * print_hexa_ex - prints an hexgecimal numberber.
 * @number: numberber to print.
 * Return: counts.
 */
int print_hexa_ex(unsigned int number)
{
	int i;
	int *array;
	int counts = 0;
	unsigned int tem = number;

	while (number / 16 != 0)
	{
		number /= 16;
		counts++;
	}
	counts++;
	array = malloc(counts * sizeof(int));

	for (i = 0; i < counts; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
	}
	for (i = counts - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counts);
}
