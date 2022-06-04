#include <stdio.h>

/**
 * main - print all possible different combination
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
		i =48;
		while (i < 50)
		{
			if (e != i && e != i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putcher(',');
				putcher(' ');

			}
			i++;
		}
		e++;
	}
	putcher('\n');
	return (0);
}
