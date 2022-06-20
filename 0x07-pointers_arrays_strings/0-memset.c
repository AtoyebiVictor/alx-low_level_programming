#include "main.h"

/**
 * *_memset functions that fills
 * @n: bytes of the memory
 * @s: Area pointed
 * @b: constan bytes
 *
 * Return: pointed to the memory area S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		*(s + p) = b;
	}
	return (s);
}
