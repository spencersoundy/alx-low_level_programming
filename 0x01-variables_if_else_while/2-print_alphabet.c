#include <stdio.h>

/**
 * main - lowercase alphabets printed
 * new line addedd
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
