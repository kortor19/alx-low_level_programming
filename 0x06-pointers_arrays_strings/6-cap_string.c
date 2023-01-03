#include "main.h"

/**
 * cap_string - Write a function that capitalizes
 *  all words of a string.
 * @s: string
 * Return: address of s
 */

char *cap_string(char *s)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}' ||
				str[index - 1] == '[' ||
				str[index - 1] == ']' ||
				index == 0)
			str[index] -= 12;
		index++;
	}
	return (str);
}
