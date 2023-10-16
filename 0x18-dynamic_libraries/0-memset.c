#include "main.h"
/**
 * _memset - print memset
 * @s: is a pointer
 * @b: is an int
 * @n: is a unsigned int
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
