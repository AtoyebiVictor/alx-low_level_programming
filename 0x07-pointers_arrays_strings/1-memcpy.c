#include "main.h"

/**
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		_memcpy(*(src + n)) = *dest;
	}
	return (dest);
}
