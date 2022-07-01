#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer value
 * Return: pointer to ht allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *lot;

	lot = malloc(b);
	if (lot == NULL)
	       	exit(98);
	return (lot);
}
