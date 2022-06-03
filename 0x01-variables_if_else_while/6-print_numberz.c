#include <stdio.h>

/**
 * main - print without using char variables
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar("%d", k);
	}
	putchar('\n');
	return (0);
}
