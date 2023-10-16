#include "main.h"
/**
 *_isdigit - check if the number is exist between 0 and 9
 *@c: is an int
 *Return: 0 (sucess)
 */
int _isdigit(int c)
{
	char b = (char) c;

	if (b >= '0' && b <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
