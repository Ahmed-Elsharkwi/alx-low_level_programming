#include "main.h"
/**
 * _memcpy - print memcpy
 * @dest: is a pointer
 * @src: is a poitner
 * @n: is a pointer
 * Return: 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
