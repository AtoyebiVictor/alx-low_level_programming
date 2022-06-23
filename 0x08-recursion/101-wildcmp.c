#include "main.h"

/**
 * wildcmp - compares two string
 * @s1: First string
 * @s2: Second string. it can be considered * as a special character
 * Return: 1 if are identical, then 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0'  && *s1 != '\0')
		return (0);
	if (*s1 != '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (wildcmp(s2 + 1, s1) || wildcmp(s1 + 1, s2));
	return (0);
}
