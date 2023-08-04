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
int main(void)
{
	unsigned long int n = 2048;
	unsigned int index = 20;
	int *p = malloc(sizeof(int) * len(n));
	unsigned int i, l = len(n);
	unsigned int j;

	if (p == NULL)
		return (-1);
	for (i = 0 ; i < l ; i++)
	{
		p[i] = n % 2;
		n = n / 2;
	}
	for (j = 0 ; j < l ; j++)
	{
		if (j == index)
			printf("%d\n", p[j]);
	}
	if (j < index)
		printf("0");
	return (1);
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
