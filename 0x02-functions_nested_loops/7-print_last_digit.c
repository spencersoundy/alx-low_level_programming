#include "main.h"

/**
 * print_last_digit - last digit is print
 * @h: h is an integer
 *
 * Return: integer
 */
int print_last_digit(int h)
{
	int last_number = h % 10;

	if (h < 0)
		last_number = last_number * -1;

	_putchar(last_number + '0');

	return (last_number);
}
