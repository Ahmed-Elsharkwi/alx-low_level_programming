#include<stdio.h>
#include<stdlib.h>
#include"main.h"
int len(int u);
/**
 * get_bit - get a bit in a specific indix
 * @n: is an int
 * @index: is an int
 * Return: 0 (success)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int *p = malloc(sizeof(int) * len(n));
	int i, j, l = len(n);
	unsigned int count = 0;

	if (p == NULL)
		return (-1);
	for (i = l - 1 ; i >= 0 ; i--)
	{
		p[i] = n % 2;
		n = n / 2;
	}
	for (j = l - 1 ; j >= 0 ; j--)
	{
		if (count == index)
			return (p[j]);
		count++;
	}
	return (-1);
}
/**
 * len - calculate the len of any number
 * @u: is an int
 * Return: 0 (success)
 */
int len(int u)
{
	int count = 0;

	while (u != 0)
	{
		u = u >> 1;
		count++;
	}
	return (count);
}
