#include <stdio.h>

/**
 * main - print all possible diffrent combination of two digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '0'; tens++)/*prints tens digits */
	{
		for (ones = '0'; ones <= '0'; ones++)/*print ones in digit */
		{
			if (!((ones == tens) || (tens > ones)))/*eliminate repition */
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/* add comma and space */
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
