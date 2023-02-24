#include "main.h"
/**
 *print_line - Entry point
 *@n: number of times line is printed
 *Description:A function thats  prints a line
 *Return:Always 0 
 */

void print_line(int n)
{
	int a;

	if (n <=0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0;a < n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
