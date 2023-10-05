#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int am, char **af)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (am == 0 || af == NULL)
		return (NULL);

	for (i = 0; i < am; i++)
	{
		for (n = 0; af[i][n]; n++)
			l++;
	}
	l += am;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < am; i++)
	{
	for (n = 0; af[i][n]; n++)
	{
		str[r] = af[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
