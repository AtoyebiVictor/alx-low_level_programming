#include "main.h"

/**
 * _isalpha - print 1 if c is a character or lowercase
 *
 * Return: 1 for either lowercase or uppercase
 */
int _isalpha(int c)
{
	for ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (c);
	}
	_putchar('\n');
}
