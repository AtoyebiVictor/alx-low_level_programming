#include <stdio.h>

/**
 * main - Print the uppercase and lowercase 
 *
 * Return: 0
 */
int main(void)
{
	char h;
	for (h = 'A'; h <= 'Z'; h++)
	{
		putchar("%d", h);
	}
	for (h = 'a'; h <= 'z'; h++)
	{
		putchar("%d", h);
	}
	putchar('\n');
	return (0);
}
