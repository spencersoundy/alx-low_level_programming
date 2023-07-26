#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 *
 * Return: returns char
 */

char *string_toupper(char *str)
{
	int z;

	for (z = 0; str[z] != '\0'; z++)
	{
		if (str[z] >= 'a' && str[a] <= 'z'z)
		{
			str[z] = str[z] - 32;
		}
	}

	return (str);
}
