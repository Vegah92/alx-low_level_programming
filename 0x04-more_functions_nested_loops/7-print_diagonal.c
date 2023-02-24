#include "main.h"

/**
 *print_diagonal - Entry point
 *@n:number of times line is printed
 *Description:A function thats  prints a diagonal line
 *Return:Always 0 (Success)
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
		for (b = 0; b < a; b++)
		{
		_putchar(32);
		}
	_putchar(92);
_putchar('\n');
		}
	}
}
