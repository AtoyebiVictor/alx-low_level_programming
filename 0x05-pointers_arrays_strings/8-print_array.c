#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n ements from an array
 * @a: pointer to the array
 * @n: Number of elewments to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);
		if (count < n - 1)
		{
			printf(", ");
		}
		count++;
	}
	printf("\n");
}
