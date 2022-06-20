#include "main.h"

/**
 * _memcpy - functions that copy memory area
 * @n: function copies
 * @src: bytes from memory area
 * @dest: Memory area
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		dest[p] = src[p];
	}
	return (dest);
}
