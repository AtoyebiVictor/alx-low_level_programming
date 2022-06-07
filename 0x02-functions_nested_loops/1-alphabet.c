#include "main.h"
#include <stdio.h>

/**
 * main - check the code for alx student
 *
 * Return: Always 0(Success)
 */
void print_alphabet(void)
{
	char j;

	for (j = 97; j <= 122; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	return 0;
}

