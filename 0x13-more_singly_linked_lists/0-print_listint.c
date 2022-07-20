#include "lists.h"

/**
 * print_listint - prints all the element
 * @h: head of a list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t kots = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		kots++;
	}

	return (kots);
}
