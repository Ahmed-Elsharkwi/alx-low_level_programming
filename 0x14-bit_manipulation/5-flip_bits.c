#include<stdio.h>
#include"main.h"
int module(int A, int B);
/**
 * flip_bits - we will try to find the different bits
 * @n: is an int
 * @m: is an int
 * Return: 0 (success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, b, count = 0;

	while (n != 0 || m != 0)
	{
		a = module(n, 2);
		b = module(m, 2);
		n = n >> 1;
		m = m >> 1;
		if (a != b)
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
