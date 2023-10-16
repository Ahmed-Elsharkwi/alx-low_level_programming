#include "main.h"
#include <string.h>
/**
 * _strncat - con two strings
 * @dest: is a pointer
 * @src: is a pointer
 * @n: is an int
 * Return: 0 (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	signed long int i;
	int k = strlen(dest);

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[k] = src[i];
		k++;
	}
	return (dest);
}
