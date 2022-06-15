#include "main.h"
/**
 * _strcmp - compares two string.
 * @s1: First string
 * @s2: Second string
 * Return: 0 if s1 and s2 are equal
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int h = 0;
	int lo = 0;

	while (lo == 0)
	{
		if ((*(s1 + h) == '\0') && (*(s2 + 1) == '\0'))
			break;
		lo = *(s1 + h) - *(s2 + h);
		h++;
	}
	return (lo);
}
