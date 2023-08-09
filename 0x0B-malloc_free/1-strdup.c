#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space in mem
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int y, z = 0;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
		y++;

	aaa = malloc(sizeof(char) * (y + 1));

	if (aaa == NULL)
		return (NULL);

	for (z = 0; str[z]; z++)
		aaa[z] = str[z];

	return (aaa);
}

