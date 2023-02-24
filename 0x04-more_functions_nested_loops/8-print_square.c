#include "main.h"

/**
 *print_square - Entry point
 *Description:A function thats  print square with #
 *@size : dimension of square
 *Return:Always 0 (Success)
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0 b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
