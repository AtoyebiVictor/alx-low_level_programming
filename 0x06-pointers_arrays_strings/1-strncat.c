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
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
