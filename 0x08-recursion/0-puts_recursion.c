#include "main.h"

/**
 * _puts_recursion - pritn a string
 * @s: pointer to char
 *
 * Return: no
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
