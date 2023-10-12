#include"lists.h"
/**
 * delete_dnodeint_at_index - delete a node in a specified index
 * @head: is a pointer
 * @index: is an int
 * Return: 1 is it success -1 is not successful
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temp_1 = NULL;
	unsigned int count = 0;

	if (index == 0 && *head != NULL)
	{
		if (temp->next != NULL)
		{
			*head = temp->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (index == count)
		{
			temp_1->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp_1;
			free(temp);
			return (1);
		}
		temp_1 = temp;
		temp = temp->next;
		count++;
	}
	return (-1);
}
