#include "search_algos.h"
/**
 * binary_search - get the index of the wanted value
 * @array: is an array of intgers
 * @size: is the size of the array
 * @value: is the wanted value
 * Return: the index of the wanted value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t j = 0, start = 0, end = size - 1, mid = 0;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		printf("Searching in array: ");
		for (j = start; j <= end; j++)
		{
			printf("%d", array[j]);
			if (j != end)
				printf(", ");
		}
		printf("\n");
		mid = (start + end) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (value > array[mid])
		{
			start = mid + 1;
		}
		else if (value < array[mid])
		{
			end = mid - 1;
		}
	}
	return (-1);
}
