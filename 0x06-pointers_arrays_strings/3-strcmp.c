#include "main.h"
/**
 * _strcmp - compares two string.
 * @s1: First string
 * @s2: Second string
 * Return: the pointer to dest.
 */
int _strcmp(char *s1, char *s2)
{
	while ( (*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (dest);
}
