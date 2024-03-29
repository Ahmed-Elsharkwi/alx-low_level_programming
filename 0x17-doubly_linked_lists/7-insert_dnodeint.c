#include"lists.h"
/**
 * insert_dnodeint_at_index - insert an element in a specified index
 * @h: is a pointer
 * @idx: is an int
 * @n: is an int
 * Return: the address of the new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	dlistint_t *temp_1 = NULL;
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0 || *h == NULL)
	{
		new->next = temp;
		if (*h != NULL)
			temp->prev = new;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (count == idx)
		{
			temp_1->next = new;
			new->prev = temp_1;
			new->next = temp;
			temp->prev = new;
			return (new);
		}
		temp_1 = temp;
		temp = temp->next;
		count++;
	}
	free(new);
	return (NULL);
}
