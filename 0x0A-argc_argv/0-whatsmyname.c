#include <stdio.h>
/**
 * main - prints the name, followed by a new line
 * @argc: contains the number of a command line of an argument
 * @argv: array of the command line of an argument
 * Return: 0 -success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
