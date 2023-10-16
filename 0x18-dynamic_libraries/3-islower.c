#include "main.h"
/**
 *_islower - check if the letter is lowercase or not
 * @c: is the char to be checked
 * Return: 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
