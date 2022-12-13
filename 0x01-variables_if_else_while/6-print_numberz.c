#include <stdio.h>

/**
 * main - program that prints all single numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digits to ASCII representation */
		putchar(digit + '0');
		++digit;
	}

	putchar('\n');

	return (0);
}
