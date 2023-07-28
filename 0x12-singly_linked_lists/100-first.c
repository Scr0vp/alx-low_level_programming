#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Constructor function executed before the main function.
 *
 * This function is marked with the 'constructor' attribute, which means it
 * will be automatically executed before the main function.
 * It prints two lines of text to the standard output.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
