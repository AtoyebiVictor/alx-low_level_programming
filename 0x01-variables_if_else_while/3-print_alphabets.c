#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print both capital and lower case
 *
 * Retun: Always 0(Success)
 */
int main(void)
{
	int i;
	for (i = 90; i < 126; i++)
	{
		if (i != 103 && i != 133)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
