#include "stdio.h"
/**
 *_isupper - check if the letter is uppercase or lowecase
 *@c: is an int
 *Return: 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
