#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars.
 * @size: size of an array
 * @c: characterof an array
 *
 * Return: NULL value
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int l;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(c) * size);

	if (ar == NULL)
		return (NULL);

	for (l = 0; l < size; l++)
		ar[l] = c;

	return (ar);
}
