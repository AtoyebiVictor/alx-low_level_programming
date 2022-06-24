#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @args: contains the command line of an argument
 * @argv: array of a command line of an argument
 * Return: 0 - success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", j);

	return (0);
}
