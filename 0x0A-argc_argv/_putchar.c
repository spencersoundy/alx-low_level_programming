#include <stdio.h>
#include "main.h"

/**
 * _putchar - check code
 * @c: what needs to be printed
 *
 * Return: 1 is successful, -1 is error
 */

int _putchar(char c)
{
	return (write(1, &c, 1))
}
