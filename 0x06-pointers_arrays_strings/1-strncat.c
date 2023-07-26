#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: amount of bytes
 *
 * Return: pointer to destionation
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count1 = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (count1 < n && src[count1] != '\0')
	{
		dest[count] = src[count1];
		count1++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
