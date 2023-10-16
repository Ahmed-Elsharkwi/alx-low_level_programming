#include "main.h"
/**
 *_isalpha - check if the letter is lowercase or uppercase
 *@c:is int var which is gonnna be checked
 *Return: 0 (success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
