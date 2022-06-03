#include <stdio.h>

/**
 * main - print out the hexadecimals
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char y;
	
	for (y = 0; y < 16; y++)
	{
		putchar(y);
	}
	for (y = 93; y < 103; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
