#include "main.h"

/**
 * malloc_checked - functions that allocates using memory
 * @b: an integer value
 *
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
