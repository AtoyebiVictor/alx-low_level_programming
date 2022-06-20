#include "main.h"

/**
 * _strspn - functions that get length of a prefix substring
 * @s: initisal segment
 * @accept: bytes
 * Return: the number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, p, bool;

	for (j = 0; *(s + j) != '\0'; j++)
		bool = j;
		for (p = 0; *(accept + p) != '\0'; p++)
			if (*(s + j) == *(accept + P))
			{
				bool = 0;
				break;
			}
		if (bool == j)
			break;
		return (i);
}

