#include "main.h"
#include <string.h>
/**
 * _strchr - locates the char
 * @s: is a pointer
 * @c: is a char
 * Return: 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
