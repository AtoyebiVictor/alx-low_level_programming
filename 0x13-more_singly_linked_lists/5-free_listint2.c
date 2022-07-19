#include "lists.h"

/**
 * free_listint2 - frees
 * @head: head of a node
 *
 * Return: no valye
 */
void free_listint2(listint_t **head)
{
	listint_t *joy;
	listint_t *hop;
	
	if (head != NULL)
	{
		hop = head;
		while((joy = hop) != NULL)
		{
			hop = hop->next;
			free(joy);
		}
		*head = NULL;
	}
}
