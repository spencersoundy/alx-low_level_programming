#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 *
 * Return: pointer to destination
 */

char *rot13(char *str)
{
	int count = 0, s;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	CHAR ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + count) != '\0')
	{
		for (s = 0; s < 52; s++)
		{
			if (*(str + count) == alphabet[s])
			{
				*(str + count) == rot13[s];
				break;
			}
		}
		count++;
	}
	return (str);
}
