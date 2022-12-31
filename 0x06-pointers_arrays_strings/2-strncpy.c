#include "main.h"

/**
 * _strncpy - Write a function that copies a string
 * @src: The source of the string
 * @dest: The destination of string
 * @n: The lenght of the int
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + 1) = *(src + 1);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
