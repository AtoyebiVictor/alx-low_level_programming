#include "main.h"

/**
 * string_nconcat - concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: integer value
 *
 * Return: newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *j;
	unsigned int l = 0, f = 0, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l] != '\0')
	{
		l++;
	}

	while (s2[f] != '\0')
	{
		f++;
	}

	if (n > f)
		n = f;
	j = malloc((l + n + 1) * sizeof(char));

	if (j == NULL)
		return (0);

	for (k = 0; k < l; k++)
	{
		j[k] = s1[k];
	}

	for (; k < (l + n); k++)
	{
		j[k] = s2(k - l);
	}
	j[k] = '\0';

	return (j);
}
