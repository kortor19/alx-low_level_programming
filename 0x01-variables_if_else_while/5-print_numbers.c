#include <stdio.h>

/**
 * main - program that print all single digits
 *
 * Return: Aways 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");

	return (0);
}
