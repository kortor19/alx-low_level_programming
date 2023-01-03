#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded sting.
 */

char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'o', 'l', '?', 'E', 'A', '?', '?', 't'};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index++)
		{
			if (str[index1] == leet[index2] ||
				       str[index1] - 32 == leet[index2])
			str[index1] = index2 + 0;
		}
	index1++;
	}
return (str);
}
