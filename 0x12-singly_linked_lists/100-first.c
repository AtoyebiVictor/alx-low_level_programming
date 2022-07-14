#include "lists.h"

/**
 * first - function executed before main
 * Return: no value
 */

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow");
	printf("\nI bore my house upon my back!\n");
}
