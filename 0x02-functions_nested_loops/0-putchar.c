#include "main.h"

/**
 * main - check code
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	char output = "_putchar";
	int o = 0;

	for (o = 0; o < 8; o++)
	{
		_putchar(output[o]);
	}
	_putchar('\n');
	return (0);
}
