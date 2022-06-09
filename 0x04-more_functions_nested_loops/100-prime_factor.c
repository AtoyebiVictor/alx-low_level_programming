#include <stdio.h>

/**
 * main - prints largest prime factors.
 * Return: Always 0;
 */

int main(void)
{
	long int n, fp;

	n = 612852475143;
	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fb;
			fp --;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
