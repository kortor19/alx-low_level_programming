#include "main.h"

/**
 * _strlen - return the length of string
 * @s: char to check
 * Return: 0 success
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
