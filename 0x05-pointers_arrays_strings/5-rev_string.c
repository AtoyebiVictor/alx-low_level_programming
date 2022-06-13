#include "main.h"

/**
 * _strlen - swaps the values of two integers
 * @s: String input
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - printsca string in reverse
 * @s: the string to print
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		i--;
	}
	return (i);
}
