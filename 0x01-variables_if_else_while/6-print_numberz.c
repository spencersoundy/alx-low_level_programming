#include <stdio.h>

/**
 * main - abase of 10 starting from 0 gets printed (single digits)
 * newline created
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
