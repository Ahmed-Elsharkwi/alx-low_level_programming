#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - print the number of elementes
 * @h: is a pointer
 * Return: 0 (success)
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil) \n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s \n", h->str);
		}
		j = j + 1;
		h = h->next;
	}
	return (j);
}
