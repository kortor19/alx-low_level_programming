#include <stdio.h>
/**
 * main - program that print all numbers of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 48; /* 48. decimal rep of 0*/

	while (digit <= 102) /*102, decimal rep of f */
	{
		putchar(digit);
		/*after 9, will jump till 96 */
		if (digit == 57)
			digit += 39;
		++digit;
	}
	putchar('\n');

	return (0);
}
