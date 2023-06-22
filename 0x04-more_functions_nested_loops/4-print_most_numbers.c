#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 excluding 2 and 4.
 */


void print_most_numbers(void)

{
	int x = 0;

	while (x < 10)
	{

		if (x == 2 || x == 4)
		{
		x++;
		continue;
		}
	_putchar(x + '0');
	x++;
	}
	_putchar('\n');
}
