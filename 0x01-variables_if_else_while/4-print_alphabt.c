#include <stdio.h>

/**
 * main - lowercase alphabet printed
 * q and e exclude when new line is created
 * Return: Always 0 (Success)
 */
int main(void)
{

	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		if (f != 'q' && f != 'e')
			putchar(f);
	}
	putchar('\n');
	return (0);
}
