#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print without using char variables
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
