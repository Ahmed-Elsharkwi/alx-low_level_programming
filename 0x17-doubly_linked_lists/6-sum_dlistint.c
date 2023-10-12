#include"lists.h"
/**
 * sum_dlistint - calculate the sum of data of the list
 * @head: is a pointer
 * Return: the sum of the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
