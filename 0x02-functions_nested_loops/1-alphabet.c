#include "main.h"

/**
 * main - check code
 *
 * Description: print_alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
