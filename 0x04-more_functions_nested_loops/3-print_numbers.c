#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
    int number;

    for (number = 0; number < 10; number++)
    {
        _putchar(number + '0');
    }

    _putchar('\n');
}
