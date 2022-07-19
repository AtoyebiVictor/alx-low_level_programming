#include "lists.h"

/**
 * free_listint - frees
 * @head: free the head of a node
 *
 * Return: no value
 */
void free_listint(listint_t *head)
{
	listint_t *kind;

	while ((kind = head) != NULL)
	{
		head = head->next;
		free(kind);
	}
}
