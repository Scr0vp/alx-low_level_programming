#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times.
 */
void more_numbers(void)
{
	int x = 0, j;

	while (x < 10)
	{
	j = 0;
	while (j <= 14)
	{
		if (j > 9)
		 _putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
	    j++;
	}

	_putchar('\n');
	x++;
	}
}
