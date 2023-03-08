#include "main.h"

/**
 *_puts_recursion - Entry point
 *@s:pointer to a string
 *Description:A function that prints a string, followed by a new line.
 *Return:string(s)
 */


void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
