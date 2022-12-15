#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: is the char to be checked
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
