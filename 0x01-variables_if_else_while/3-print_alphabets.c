#include <stdio.h>

/**
 * main - prints lower and uppercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k;
	char p;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar(k);
	}
	for (p = 'A'; p <= 'Z'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
