#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two string
 * @s1: First string
 * @s2: Second string
 *
 * Return: no value
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, l, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (l = 0; l < i; l++)
		str[l] = s1[l];

	limit = j;

	for (j = 0; j <= limit; l++, j++)
		str[j] = s2[j];

	return (str);
}
