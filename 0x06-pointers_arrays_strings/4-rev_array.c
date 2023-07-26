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
	int d, b, c;

	for (d = 0; d < n - 1; d++)
	{
		for (b = d + 1; b > 0; b--)
		{
			c = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = c;
		}
	}
}
