#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times.
 */
void more_numbers(void)
{
	int x, j;

	for (x = 0; x < 10; x++)
		{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)

		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');

	}

	_putchar('\n');
	}
}
