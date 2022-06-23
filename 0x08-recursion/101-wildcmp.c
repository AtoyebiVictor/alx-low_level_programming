#include "main.h"

/**
 * wildcmp - compares two string and return 1 if the strings can be considered identical otherwise return 0
 * @s1: First string
 * @s2: Second string
 * Return: 1 and 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0')
		if (*s2 != '\0')
			_putchar ("*");
	if (*s1 != '\0' || *s2 != '\0' && *s1 = *s2 || *s2 = *s1)
		return (1)
	else
		return (wildcmp(s2 + 1, s1) || wildcmp(s1 + 1, s2));
	return (0);
}
