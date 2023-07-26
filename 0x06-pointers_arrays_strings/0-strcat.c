#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, count1 = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	while (src[count1] != '\0')
	{
		dest[count] = src[count1];
		count1++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
