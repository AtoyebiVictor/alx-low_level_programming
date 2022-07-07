#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameter
 * @n: integer variables
 *
 * Return: sum of its parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list joy;
	unsigned int k;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(joy, n);

	for (k = 0; k < n; k++)
		sum += va_arg(joy, int);

	va_end(joy);

	return (sum);
}
