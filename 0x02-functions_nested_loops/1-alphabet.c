#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0
 */
void print_alphabet(char);

int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		putchar("%c", j);
	}
	putchar("\n");
	return 0;
}

