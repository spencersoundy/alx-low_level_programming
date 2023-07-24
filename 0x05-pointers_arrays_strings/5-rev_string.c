#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int x, y, z;
	char a, b;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	y = x - 1;
	z = y / 2;
	while z >= 0
	{
		a = s[y - z];
		b = s[z];
		s[z] = aa;
		s[y - z] = b;
		z--;
	}
}
