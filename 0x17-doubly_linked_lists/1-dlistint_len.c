#include "lists.h"
/**
 * dlistint_len - get the number of elements in the list
 * @h: is a pointer
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int number_elements = 0;

	while (temp != NULL)
	{
		number_elements++;
		temp = temp->next;
	}
	return (number_elements);
}
