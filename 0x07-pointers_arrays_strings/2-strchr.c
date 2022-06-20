#include "main.h"

/**
 * _strchr - functions that locate a char in a string
 * @s: String
 * @c: character
 * Return: pointer to the first occurence of a char
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0);
}
