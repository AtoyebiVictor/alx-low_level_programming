#include <stdio.h>

/**
 * main - printing of alphabet
 *
 * Return: 0
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	
	int p;
	for (p = 0, p < 26; p++)
	{
		putchar(alpha[p]);
	}
	putchar('\n');
	return 0;
}
