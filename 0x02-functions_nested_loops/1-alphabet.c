#include <stdio.h>

/**
 * main - print out code that deals with prototype
 *
 * Return: Always 0
 */
void print_alphabet(char);

int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		printf("_putchar %c", j);
	}
	printf("_putchar\n");
	return 0;
}

