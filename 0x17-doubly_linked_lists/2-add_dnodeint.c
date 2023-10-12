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
	dlistint_t *temp = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	temp = *head;
	return (temp);
}
