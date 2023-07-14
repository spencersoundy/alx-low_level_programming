#include <stdio.h>

/**
 * main - lowercase alphabet printed
 * q and e exclude when new line is created
 * Return: Always 0 (Success)
 */
int main(void)
{

	char ch = "a";

	while (ch <= "z")
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n')
	return (0);
}
