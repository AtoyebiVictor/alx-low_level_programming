#include "main.h"

/**
 * _strncat - concatenate two strings.
 * @dest: destination.
 * @src: source.
 * @n: print amount of bytes used from src.
 * Return: the pointer of destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] == '\0'; j++)
		{
			dest[i + j] = src[j];
			dest[i + j] = '\0';
		}
	}
	return (dest);
}
