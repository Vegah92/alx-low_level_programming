#include <stdio.h>
#include "main.h"
/**
 *times_table - Entry point
 *Description:A function that prints the 9 times table
 *Return:Always 0 (Success)
 */
void times_table(void)
{
	int n = 9;
	int i, j;
	int result;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			_putchar(result);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}



}
