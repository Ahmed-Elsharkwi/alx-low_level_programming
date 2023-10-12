#include "lists.h"
/**
 * get_dnodeint_at_index - get the element at a specific index
 * @head: is a pointer
 * @index: is an int
 * Return: the element which is exist in that index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
