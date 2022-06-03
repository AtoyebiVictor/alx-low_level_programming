#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - print lower and upper case in alphabet
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; 1++)
	{
		if (i != 101  && i !=113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
