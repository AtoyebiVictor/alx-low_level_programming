#include <stdio.h>
/**
 * main - prints all argument it receives
 * @argc: contains the number of comman line of an argument
 * @argv: array of the command line of an argument
 * Return: 0 - success
 */
int main(int argc, char *argv)
{
	int u;

	for (u = 0; u < argc; u++)
	{
		printf("%d\n", argv[u]);
	}
	return (0);
}
