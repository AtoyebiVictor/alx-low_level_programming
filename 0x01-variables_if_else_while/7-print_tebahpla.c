#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print reverse lowercase
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int f;

	for (f = 'z'; f >= 'a'; f--)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
