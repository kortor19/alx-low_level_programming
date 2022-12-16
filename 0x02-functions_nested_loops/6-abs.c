#include "main.h"

/**
 *  _abs - program that compute absolute value of an integer
 *
 * @n: parameter
 *
 * Return: absolute value of a number
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
