#include <stdio.h>
#include <stdlib.h>

/**
 * main - maximum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: 1-D array of arguments
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int cents, coin = 0;

	if (args != 2)
		printf("Error\n");
	return (1);

	if (argv[1][0] == '-')
		printf("0\n");
	return (0);


	/*Type cast input*/
	cents = atoi(argv[1]);


	coins += cents / 25;
	cents = cents % 25;

	coins += cents / 10;
	cents = cents % 10;

	coins += cents / 5;
	cents = cents % 5;

	coins += cents / 2;
	cents = cents % 2;

	coins += cents / 1;
	cents = cents % 1;

	printf("%d\n", coins);

	return (0);
}