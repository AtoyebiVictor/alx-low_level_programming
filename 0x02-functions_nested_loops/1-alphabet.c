#include "main.h"

/**
 * main - check the code for alx student
 *
 * Return: Always 0(Success)
 */
void print_alphabet(char);

int main(void)
{
	char j;

	print_alphabet(j);

	for (j = 'a'; j <= 'z'; j++)
	{
		printf("_putchar %c", j);
	}
	printf("_putchar\n");
	return 0;
}

