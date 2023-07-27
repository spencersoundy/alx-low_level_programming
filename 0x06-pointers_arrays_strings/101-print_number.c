#include "main.h"

/**
 * print_number - prints integer
 * @n: input integer
 *
 * Return: no return
 */

void print_number(int n)
{
	unsigned int r, t, count;

	if (n < 0)
	{
		_putchar(45);
		r = n * -1;
	}
	else
	{
		r = n;
	}

	t = r;
	count = 1;

	while (t > 9)
	{
		t /= 10;
		count *= 10;
	}

	for (count = 0; count >= 1; count /= 10)
	{
		_putchar(((r / count) % 10) + 48);
	}
}
