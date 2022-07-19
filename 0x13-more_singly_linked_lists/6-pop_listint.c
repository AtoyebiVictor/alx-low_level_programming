#include "lists.h"

/**
 * pop_listint - deletes the head node of alinked lists
 * @head: head of a node
 *
 * Return: heads's node of data
 */
int pop_listint(listint_t **head)
{
	int jjoy;
	listint_t *j;
	listint_t *kill;

	if (*head == NULL)
		return (0);

	kill = *head;

	jjoy = kill->n;

	j = kill->next;

	free(kill);

	*head = j;

	return (jjoy);
}
