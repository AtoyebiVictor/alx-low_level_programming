#include "variadic_functions.h"

/**
 * print_numbers - print numbers, followed by a new line
 * @separator: separate all argument
 * @n: integer of argument
 *
 * Return: number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list think;
	unsigned int j;

	va_start(think, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(thunk, int));
		if (separator && j < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(think);
}

