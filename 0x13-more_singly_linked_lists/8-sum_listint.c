#include "lists.h"

/**
 * sum_listint - sum of all data(n) on a linked list
 * @head: head of a node
 *
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add = add + head->n;
		head = head->next;
	}

	return (add);
}
