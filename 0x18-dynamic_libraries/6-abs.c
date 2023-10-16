#include "main.h"
/**
 *_abs - print the abs val for the num
 *@n: is an int
 *Return: 0 (success)
 */
int _abs(int n)
{
	int i;

	if (n <= 0)
	{
		i = -1 * n;
		return (i);
	}
	else
	{
		return (n);
	}
}
