#include "main.h"
/**
 * string_toupper - changes all lowercasse letter to a string
 * to uppercase.
 * @s: input string
 * Return: the pointer to s.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 122))
			*(s + i) = *(s - 1) - 32;
		i++;
	}
	return (s);
}
