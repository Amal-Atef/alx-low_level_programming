#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - this function duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aa;
	int j, r = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	aa = malloc(sizeof(char) * (j + 1));

	if (aa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aa[r] = str[r];

	return (aa);
}

