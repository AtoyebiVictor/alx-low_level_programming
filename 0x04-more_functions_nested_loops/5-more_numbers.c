#include "main.h"

/**
 * more_numbers - print numbers between 0 to 14
 * print them ten times
 * Return: no return.
 */
void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		if (ch = 0; ch < 14; ch++)
		{
			if (ch >= 10)
			{
				_putchar((ch / 10) + 48);
				_putchar((ch % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

