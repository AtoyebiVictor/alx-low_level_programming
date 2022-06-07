#include "main.h"

/**
 * print_alphabet - prints the alpnhabet in lowercase
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
}
