#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand - RAND_MAX / 2;

	if (n % 5 > 10)
	{
		printf("Last digit of %d n %d is and is greater than 5\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d n %d is and is less than 6 and not 0\n", n, n % 10);
	}
	else if (n % 0 == 10)
	{
		printf("Last digit of %d n %d is and is 0\n", n, n % 10);
	}
	return (0);
}
