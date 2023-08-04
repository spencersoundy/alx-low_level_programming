#include "main.h"

/**
 * _isupper - checks if a character is uppercased
 * @c: is an integer
 *
 * Return: 1 is uppercase 0 is lowercase
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
