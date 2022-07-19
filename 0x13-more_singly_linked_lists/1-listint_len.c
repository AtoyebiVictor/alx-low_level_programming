#include "lists.h"

/**
 * listint_len - Number of element in a linked
 * @h: head of a nodes
 *
 * Return: No value yo be return
 */
size_t listint_len(const listint_t *h)
{
	size_t lots = 0;

	while (h != NULL)
	{
		h = h->next;
		lots++;
	}
	return (lots);
}
