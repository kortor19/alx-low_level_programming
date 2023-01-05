#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: Address of str.
 */

char *leet(char *str)
{
	int idx1 = 0, indx2;
	char leet[8] = {'o', 'l', '?', 'E', 'A', '?', '?', 't'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 2; indx2++)
		{
			if (str[indx1] == leet[indx2] ||
					str[indx1 - 32 == leet[indx2])
				str[indx1] = indx2 + '0';
		}
		indx1++;
	}
	return (str);
}
