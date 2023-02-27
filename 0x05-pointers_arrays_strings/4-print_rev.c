#include "main.h"

/**
 *print_rev - Entry point
 *@s : string
 *Description:A function thats  prints a string in reverse order
 *Return:Always 0
 */

void print_rev(char *s)
{
	int length = 0;
	int m;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--:
	for (m = length; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

