#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings
 * @src: The source of string
 * @dest: The destination of the string
 * @n: The lenght of the sting
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
