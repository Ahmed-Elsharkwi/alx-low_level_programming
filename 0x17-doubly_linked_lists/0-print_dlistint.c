#include"lists.h"
/**
 * print_dlistint - print all the elements of list
 * @h: is a pointer
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int number_nodes = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		number_nodes++;
		temp = temp->next;
	}
	return (number_nodes);
}
