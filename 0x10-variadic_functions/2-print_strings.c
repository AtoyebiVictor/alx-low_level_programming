#include "variadic_functions.h"

/**
 * print_strings - prints string, followed by a new line
 * @separator: idntify the argument
 * @n: integer of argument
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list let;
	unsigned int m;
	char *jets;

	va_start(let, n);

	for (m = 0; m < n; m++)
	{
		jets = va_arg(let, char *);

		if (jets)
			printf("%s", jets);
		else
			printf("(nil)");

		if (m < n - 1)
			if (separator)
				printf("%s", separatot);
	}

	printf("\n");
	va_end(let);
}
