#include "lists.h"

/**
 * *add_nodeint - Adds a new node at the beginning
 * @n: integer
 * @head: head of a list
 *
 * Return: Address of a new function or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *joy;

	joy = malloc(sizeof(listint_t));

	if (joy == NULL)
		return (NULL);
	joy->n = n;
	joy->next = *head;
	*head = joy;

	return (*head);
}
