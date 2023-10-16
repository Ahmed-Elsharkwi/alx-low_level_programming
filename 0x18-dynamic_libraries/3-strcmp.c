#include "main.h"
/**
 * _strcmp - compare two str
 * @s1: is a pointer
 * @s2: is a pointer
 * Return: 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int val, i;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		if (s1[i] > s2[i])
		{
			val = (int)(s1[i]) - (int)(s2[i]);
			break;
		}
		else if (s1[i] < s2[i])
		{
			val = (int)(s1[i]) - (int)(s2[i]);
			break;
		}
		else
		{
			val = 0;
		}
	}
	return (val);
}
