#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *d, *e, z;
	int f;

	d = a;
	e = a;

	for (f = 0; f < n - 1; f++)
	{
		e++
	}

	for (f = 0; f < n / 2; f++)
	{
		z = *e;
		*e = *d;
		*d = z;
		d++;
		e--;
	}
}