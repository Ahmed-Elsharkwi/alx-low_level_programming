#include "main.h"
#include <string.h>
/**
 * _strcpy - copy a string
 * @dest: is a pointer
 * @src: is a pointer
 * Return: 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	unsigned long int i;

	for (i = 0 ; i <= strlen(src) ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
