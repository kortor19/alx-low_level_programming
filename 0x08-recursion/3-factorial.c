#include "main.h"

/**
 * factorial - factorial of a given int
 * @n: int
 * Return: int
 */

int factorial(int n)
{
	int x = 0;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
