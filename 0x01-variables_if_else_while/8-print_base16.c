#include <stdio.h>

/**
 * main - numbers of base 16 in lowercase are printed
 * newline created
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		puthchar(ch);
	}
	putchar('\n');
	return (0);
}
