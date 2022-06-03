#include <stdio.h>

/**
 * main - Print alphabet
 *
 * Return: ALways 0(Success)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int p;

	for (p = 0; p < 26; p++)
	{
		putchar(alph[p]);
	}
	putchar('\n');
	return 0;
}
