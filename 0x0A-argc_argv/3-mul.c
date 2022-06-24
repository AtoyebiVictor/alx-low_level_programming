#include <stdio.h>
/**
 * main - multiplies two numbers
 * @args: contains the command line of an argument
 * @argv: array of a command line of an argument
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
