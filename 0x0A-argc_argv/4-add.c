#include <stdio.h>
/**
 * main - adds positive number
 * @argc: contains the command line of an argument
 * @argv: array that contains the command line of an argument
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;
	
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (i);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d", add);
	return (0);
}
