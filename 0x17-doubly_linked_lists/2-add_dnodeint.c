#include"lists.h"
/**
 * add_dnodeint - add a new node a the begging of the list
 * @head: is a pointer
 * @n: is an int
 * Return: the address of the first node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
