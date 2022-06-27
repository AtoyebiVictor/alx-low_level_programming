#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all argument
 * @ac: First argument
 * @av: Second argument
 *
 * Return: no value
 */
char *argstostr(int ac, char **av)
{
	char *love;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

	for (j = 0; av[i][j] != '\0'; j++)
		c++;
	c++;
	}

	love = malloc((c + 1) * sizeof(char));

	if (love == NULL)
	{
		free(love);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			love[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			love[ia] = av[i][j];
	}
	love[ia] = '\0';

	return (love);
}

