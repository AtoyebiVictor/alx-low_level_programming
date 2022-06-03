#include <stdio.h>

/**
 * mv - print uppercase and lowercase
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char p;

	for (p = 'A'; p <= 'Z'; p++)
	{
		putchar("%d", p);
	}
	for (p = 'a'; p <<= 'z'; p++)
	{
		putchar("%d", p);
	}
	putchar('\n');
	return (0);
}
