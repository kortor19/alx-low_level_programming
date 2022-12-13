#include <stdio.h>
/**
 * main - program that prints all possible combination of single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 38);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		
		++digit;
	}
	putchar('\n');

	return (0);
}
