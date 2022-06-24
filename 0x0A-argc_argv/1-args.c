#include <stdio.h>
/**
 * main - print the number of argument passedinto it
 * @argc: contains the number of line in argument
 * @argv: array of the number of line in an argument
 * Return: 0 - success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
