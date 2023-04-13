#include "main.h"
#include <stdlib.h>
/**
 * array_range - allocate the memory
 * @min: is the min num
 * @max: is the max
 * Return: 0 (success)
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
	{
		s[i] = min;
		min++;
	}
	s[i] = '\0';
	return (s);
}
