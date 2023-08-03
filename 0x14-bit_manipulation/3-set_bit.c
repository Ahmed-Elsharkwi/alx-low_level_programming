#include<stdio.h>
#include<stdlib.h>
#include"main.h"
int len(int u);
int pow_1(int o, int i);
/**
 * set_bit - get a bit in a specific indix
 * @n: is an int
 * @index: is an int
 * Return: 0 (success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int val = *n;
	int *p = malloc(sizeof(int) * len(val));
	unsigned long  int i, l = len(val);
	unsigned int j, h; 
	unsigned long int sum = 0;

	if (p == NULL)
		return (-1);
	if (val == 0)
		sum = sum + (1 * pow_1(2, index));
	for (i = 0 ; i < l ; i++)
	{
		p[i] = val % 2;
		val = val / 2;
	}
	for (j = 0 ; j < l ; j++)
	{
		if (j == index)
			p[j] = 1;
	}
	for (h = 0 ; h < l ; h++)
	{
		sum += p[h] * pow_1(2,h);
	}
	*n = sum;
	if (n != NULL)
	{
		free(p);
		return (1);
	}
	free (p);
	return (-1);
}
/**
 * len - calculate the len of any number
 * @u: is an int
 * Return: 0 (success)
 */
int len(int u)
{
	unsigned int count = 0;

	while (u != 0)
	{
		u = u >> 1;
		count++;
	}
	return (count);
}
/**
 * pow_1 - calculate the power of any number
 * @o: is an int
 * @i: is an int
 * Return: 0 (success)
 */
int pow_1(int o, int i)
{
	int a, sum = 1;

	for (a = 0 ; a < i ; a++)
		sum = sum * o;
	return (sum);
}

