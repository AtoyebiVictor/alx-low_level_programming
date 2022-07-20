#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end
 * @head: head of a nodes
 * @n: integer
 * Return: Address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lots;

	lots = malloc(sizeof(listint_t));

	if (lots == NULL)
		return (NULL);

	lots->n = n;
	lots->next = NULL;

	if (*head == NULL)
	{
		*head = lots;
	}
	else
	{
		listint_t *last = *head;

		while (last->next != NULL)
		{
			last = last>next;
		}

		last->next = lots;
	}

	return (lots);
}
