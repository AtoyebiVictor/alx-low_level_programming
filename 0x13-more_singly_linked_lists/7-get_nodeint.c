#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: head of anode
 * @index: index number
 *
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}

	return (head);
}
