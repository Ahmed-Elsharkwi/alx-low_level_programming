#include "main.h"
#include <string.h>
/**
 *  _print_rev_recursion - print the str in rev
 *  @s: is a pointer
 *  Return: 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else if (*s == '\0')
		return;
}
