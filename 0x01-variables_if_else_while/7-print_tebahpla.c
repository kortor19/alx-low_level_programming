#include <stdio.h>

/**
 * main - program that prints lowercase alphabets in reverse order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}
