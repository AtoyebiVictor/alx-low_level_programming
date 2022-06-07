#include "main.h"

/**
 * _abs - compute the absolut value.
 * of an integer
 *
 * @i: input number as an integer
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
}
