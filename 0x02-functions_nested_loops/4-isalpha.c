#include "main.h"

/**
 * _isalpha - alphabectic characters are checked
 * @c: c is an ascii charackter
 *
 * Return: 1 (if letter)
 * */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
