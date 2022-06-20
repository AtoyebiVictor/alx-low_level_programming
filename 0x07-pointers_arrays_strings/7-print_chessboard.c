#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: input pointer
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	unsigned int j, m = 0;

	for (j = 0; j < 64; j++)
	{
		if (j % 8 == 0 && j != 0)
		{
			m = j;
			_putchar('\n');
		}
		_putchar(a[j / 8][j - m]);
	}
	_putchar('\n');
}
