#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: mo return
 */
void print_diagonal(int n)
{
	int p, l;
	
	for (p = 0; p < n; p++)
	{
		for (l = 0; l < p; l++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (p < (n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
