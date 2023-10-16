#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - print the num
 * @s: is a pointer
 * @accept: is a pointer
 * Return: 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, l;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (l = 0 ; accept[l] != '\0' ; l++)
		{
			if (s[i] == accept[l])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
