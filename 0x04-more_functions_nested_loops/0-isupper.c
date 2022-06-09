#include "main.h"

/**
 * main - Print out the function 
 * that checks for uppercase character
 * @a: input character
 *
 * Return: ! if its uppercase, 0 in other case.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
