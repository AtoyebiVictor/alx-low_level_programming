#include <stdio.h>

/**
 * main - print numbers between 00 and 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 50)
	{
		i = 48;
		while (i < 50)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			e++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
