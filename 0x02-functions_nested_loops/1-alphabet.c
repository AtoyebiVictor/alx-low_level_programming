#include "main.h"

/**
 * main - Check code for alx school
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int j;

	for (j = 97; j <= 122; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	return 0;
}
