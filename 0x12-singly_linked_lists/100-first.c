#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - a sentence before the main is printed
 * executes the function
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
