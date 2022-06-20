#include "main.h"
#include <stdio.h>
#include <String.h>

/**
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		strcpy(*(src + n)) = *dest;
	}
	return (dest);
}
