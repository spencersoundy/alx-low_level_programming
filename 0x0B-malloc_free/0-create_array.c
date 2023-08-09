#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int z;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (z = 0; z < size; z++)
		str[z] = c;
	return (str);
}

