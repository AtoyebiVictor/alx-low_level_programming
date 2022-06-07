#include "main.h"

/**
 * _islower - show l if the input is a\
 * lowercase character, another cases, shows
 * o
 *
 * @c: The character is an ASCII code
 *
 * Return: 1 for the lowercase character, 0 is the rest
 */
int _islower(int c)
{
	if(c >= 97 && c <= 22)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
