#include<stdio.h>
#include"main.h"
/**
 * get_endianness - check what is the endianness of your device
 * Return: 0 (success)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *s = (char *)&i;

	if (*s)
	{
		return (1);
	}
	else
		return (0);
}
