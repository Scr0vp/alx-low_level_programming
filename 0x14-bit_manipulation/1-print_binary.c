#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int leading_zeroes = 1;

	for (i = 63; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if (n & mask)
		{
			leading_zeroes = 0;
			_putchar('1');
		}
		else if (!leading_zeroes)
		{
			_putchar('0');
		}
	}
	if (leading_zeroes)
		_putchar('0');
}
