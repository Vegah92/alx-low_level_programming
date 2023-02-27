#include "main.h"

/**
 *_puts - Entry point
 *@str : string
 *Description:A function thats  prints a string
 *Return:Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
