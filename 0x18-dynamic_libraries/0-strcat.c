#include "main.h"
#include <string.h>
/**
 * _strcat - print two str
 * @dest: is a pointer
 * @src: is a pointer
 * Return: 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	unsigned long int j;
	int k = strlen(dest);

	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[k] = src[j];
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
