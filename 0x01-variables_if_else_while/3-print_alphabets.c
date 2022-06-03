#include <stdio.h>

/**
 * main - print in lower and upper case
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	for (r = 'A'; r < 'Z'; r++)
	{
		putchar(r);
	}
	for (r = 'a'; r < 'z'; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
