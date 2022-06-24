#include "main.h"

/**
 * _strpbrk - searches a string of any of a set of bytes
 * @s: string
 * @accept: bytes
 * Return: byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j, k;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + j) == *(accept + k))
				return (s + j);
		}
	}
	return ('\0');
}
