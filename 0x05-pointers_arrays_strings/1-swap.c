#include "main.h"

/**
 * swap_int - swps two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
