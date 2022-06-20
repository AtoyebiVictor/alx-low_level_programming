#include "main.h"

/**
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
