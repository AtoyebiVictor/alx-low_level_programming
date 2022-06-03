#include <stdio.h>

/**
 * main - print all possible different combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int k, n;

	k = 48;
	n = 48;

	while (n < 50)
	{
		k =48;
		while (k < 50)
		{
			if (n != k && n != k)
			{
				putchar(n);
				putchar(k);
				if (k == 57 && n == 56)
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
