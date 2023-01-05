#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 * @s: The string to be encoded
 *
 * Return: Address of s.
 */

char *leet(char *s)
{
	int i, j;

	char [a] = "aAeEoOTlL";
	char [b] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == s[j])
				s[i] = b[j];
		}
	}
	return (s);
}
