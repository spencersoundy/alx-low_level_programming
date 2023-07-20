#include "main.h"

/**
 * print_line - function that draws a line
 * @n: an integer
 *
 * Return: Always 0
 */

void print_line(void)
{
	int m = 0;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
			_putchar('_');
	}
	_putchar('\n');
}
