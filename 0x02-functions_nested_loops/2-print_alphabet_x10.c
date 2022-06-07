#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet multiple times
 *
 * Return: ALways 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j, o;
	for (j = 0; j <= 9; j++)
	{
		for (o = 97; 0 <= 122; o++)
		{
			_putchar(j);
		}
		_putchar("o\n");
	}
}
