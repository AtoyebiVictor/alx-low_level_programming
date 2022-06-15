#include "main.h"
/**
 * _strncat - concatenate two string
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int n;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] = n; j++)
		{
			dest[i + j] = src[j];
		}
	}
	return (dest);
}
