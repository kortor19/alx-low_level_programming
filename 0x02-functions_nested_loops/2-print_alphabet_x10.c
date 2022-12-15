#include "main.h"

/**
 * print_aphabet_10x - print 10 times the alphabet, in lowercase
 * written by Bernard
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int loop = 0;

	while (loop < 10)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');

		loop++;
	}
}
