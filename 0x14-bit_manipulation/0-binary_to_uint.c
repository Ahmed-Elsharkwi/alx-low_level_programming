#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"
int pow_1(int base, int power);
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is a pointer
 * Return: 0 (success)
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	for (i = strlen(b) - 1 ; i >= 0 ; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			res += ((b[i] - '0') * pow_1(2, j));
			j++;
		}
		else
			return (0);
	}
	return (res);
}
/**
 * pow_1 - calculate the power of any number
 * @base: is an int
 * @power: is an int
 * Return: 0 (success)
 */
int pow_1(int base, int power)
{
	int i, sum = 1;

	for (i = 0 ; i < power ; i++)
		sum = sum * base;
	return (sum);

}
