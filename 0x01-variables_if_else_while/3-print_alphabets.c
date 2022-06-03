#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet in beoth Small and Capital
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	for (i = 97; i < 126; i++);
	{
		if (i != 103 && i != 123)
		{
			putchsr(i);
		}
	}
	putchar('\n');
	return (0);
}
