#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated memory space.
 * @str: copy the sting
 *
 * Return: no value
 */
char *_strdup(char *str)
{
	char *jk;
	unsigned int j, k;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	jk = (char *)malloc(sizeof(char) * (j + 1));

	if (jk == NULL)
		return (NULL);

	for (k = 0; k <= j; k++)
		jk[k] = str[k];

	return (jk);
}
