#include <stdio.h>

/**
 * main - lowercase alphabet print then uppercase alphabet printed
 * new line created
 * return : Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = "a"; ch,= "z"; ch++)
		putchar(ch);
	for (ch = "A"; ch <= "Z"; ch++)
		putchar(ch);
	putchar("\n");
	return (0);
}
