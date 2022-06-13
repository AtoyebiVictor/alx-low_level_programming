#include "main.h"

/**
 * reset_to_98 - prints a pointer to an int as a parameter
 * @m: and updates the value
 *
 * Return: Always 0 (Success)
 */
void reset_to_98(int *n)
{
	int i = 98;
	int *n = &i;

	printf("Value of thhe point:%p", i);
	return;
}
