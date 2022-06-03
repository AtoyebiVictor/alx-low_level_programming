#include <stdio.h>

/**
 * main - print lower and upper case in alphabet
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char small[26] = "abcdefghijklmnopqrstuvwxyz";

	int r;
	for (r = 0; r < 26; r++)
	{
		putchar(small[r]);
	}

	char large[26] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int d;
	for (d = 0; d < 26; d++)
	{
		putchar(large[26]);
	}
	putchar('\n');
	return (0);
}
