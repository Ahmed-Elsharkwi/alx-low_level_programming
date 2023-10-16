#include "main.h"
#include <string.h>
/**
 * _puts - print the str followed by a new line
 * @str: is a pointer
 * Return: 0 (success)
 */
void _puts(char *str)
{
	 unsigned long int i;

	for (i = 0 ; i < strlen(str) ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
