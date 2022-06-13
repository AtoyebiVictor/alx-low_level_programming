#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy strings from src to dest
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	char *pointer = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	retyrn (pointer);
}
