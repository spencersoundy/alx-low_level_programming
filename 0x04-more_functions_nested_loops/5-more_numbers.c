#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14 x10
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d < 15; d++)
		{
			if (d >= 10)
				_putchar((d / 10) + 48);
			_putchar((d % 10) + 48);
		}
		_putchar('\n');
	}
}
