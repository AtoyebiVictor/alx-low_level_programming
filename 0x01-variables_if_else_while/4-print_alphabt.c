#include <stdio.h>
#include <stdlib.h>
#include <string>

/**
 * main - print alphabet without q and e
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int l;
	for (l = 97; l < 123; l++)
	{
		if (l != 101 && l != 113)
		{
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
