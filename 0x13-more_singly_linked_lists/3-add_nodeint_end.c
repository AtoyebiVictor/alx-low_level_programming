#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: head of a nodes
 * @n: integer
 *
 * Return: Address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lots;
	listint_t *joy;

	(void)joy;

	lots = malloc(sizeof(listint_t));

	if (lots == NULL)
		return (NULL);

	lots->n = n;
	lots->next = NULL;
	joy = *head;
	if (*head == NULL)
	{
		*head = joy;
	}
	else
	{
		while (joy->next != NULL)
		{
			joy = joy->next;
		}
		joy->next = lots;
	}
	return (*head);
}
