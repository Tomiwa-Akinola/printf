#include "main.h"

/**
 * _strlen - return length of string
 * @str: pointer to a string
 * Return: i
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != 0; len++)
		;
	return (len);
}

/**
 * _strlenc - strlen function for constant char
 * @str: pointer to character
 * Return: i
 */

int _strlenc(const char *str)
{
	int len;

	for (len = 0; str[len] != 0; len++)
		;
	return (len);
}
