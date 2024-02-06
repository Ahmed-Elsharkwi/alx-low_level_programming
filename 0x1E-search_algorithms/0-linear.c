#include "search_algos.h"
/**
 * linear_search - get the index of the wanted value
 * @array: array of intgers
 * @size: the size of the array
 * @value: the wanted value
 * Return: return the index of the wanted value or -1 in case of failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		if (value == array[i])
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}

		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
		i++;
	}
	return (-1);
}
