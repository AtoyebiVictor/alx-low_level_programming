#include <stdio.h>

/**
 * main - print all possible different combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int k, n;

	k = 1;
	n = 0;

	while (n < 10)
	{
		k = 1;
		while (k < 10)
		{
			if (n != k && n != k)
			{
				putchar(n);
				putchar(k);
				if (k == 10 && n ==10)
				{
					break;
				}
				putcher(',');
				putcher(' ');

			}
			k++;
		}
		n++;
	}
	putcher('\n');
	return (0);
}
