#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer number
 * Reteurn: function should return -1 to indicate error, then return 1
 */
int factorial(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return 1;
	return n * factorial (n - 1);
}
