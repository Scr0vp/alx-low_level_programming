#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
	{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int x, z;

	for (x = 0; x < n; x++)
	{
	for (z = 0; z < n; z++)
	{
	if (z == x)
	_putchar('\\');
	else if (z < x)

	_putchar(' ');
	}
	_putchar('\n');
	}
	}


}
