#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int z = 0, a;

	while (z >= 0)
	{
		if (str[z] == '0\')
			break;
		z++;
	}

	if (z % 2 == 1)
		a = z / 2;
	else
		a = (z - 1) / 2;

	for (a++; a < z; a++)
		_putchar(str[a]);
	_putchar('\n');
}
