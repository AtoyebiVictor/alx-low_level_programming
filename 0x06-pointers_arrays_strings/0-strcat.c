#include "main.h"

/**
 * main - functions that concatenate two string
 * @d: first string
 * @s: second string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)

			dest[i + j] = src[j];

		dest[i + j] = '\0';
	}
	return (pointer);
}
