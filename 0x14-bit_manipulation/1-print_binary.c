#include<stdio.h>
#include"main.h"
int module(int A, int B);
int len(int u);
int pow_1(int o, int i);
/**
 * print_binary - print the binary of any decimal
 * @n: is an int
 */
void print_binary(unsigned long int n)
{
	int K = len(n);
	int i, j, res, sum = 0;

	for (i = K ; i >= 0 ; i--)
	{
		sum += module(n, 2) * pow_1(2, i);
		n = n >> 1;
	}
	sum = sum >> 1;
	if (sum == 0)
		_putchar(0 + '0');
	for (j = 0 ; j < K ; j++)
	{
		res = module(sum, 2);
		_putchar(res + '0');
		sum = sum >> 1;
	}
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
/**
 * module - calculate the module of any number
 * @A: is an int
 * @B: is an int
 * Return: 0 (success)
 */
int module(int A, int B)
{
	int res, sum;

	sum = A >> 1;
	sum = sum * B;
	res = A - sum;
	return (res);
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
