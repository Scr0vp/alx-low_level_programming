#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */


int main(void)
{
	int z;

	for (z = 1; z <= 100; z++)
	{
		if (z % 3 == 0 && z % 5 != 0)
		{
			printf(" Fizz");
		}

		else if (z % 5 == 0 && z % 3 != 0)
		{
			printf(" Buzz");
		}

		else if (z % 3 == 0 && z % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (z == 0)
		{
			printf("%d", z);
		}
		else
		{
			printf(" %d", z);
		}
	}
	printf("\n");

	return (0);

}
