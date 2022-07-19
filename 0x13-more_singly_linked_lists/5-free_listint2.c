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
	listint_t *love;

	if (head != NULL)
	{
		love = *head;
		while ((joy = love) != NULL)
		{
			love = love->next;
			free(joy);
		}
		*head = NULL;
	}
}
