#include "lists.h"
/**
 * free_dlistint - free the whole list
 * @head: is a pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head == NULL)
		return;
	while (temp->next != NULL)
	{
		temp = temp->next;
		free(temp->prev);
	}
	free(temp);
}
