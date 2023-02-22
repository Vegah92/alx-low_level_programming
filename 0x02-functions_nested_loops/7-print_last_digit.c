#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - Entry point
 *@c: number to be printed
 *Description:function that prints the last digit of a number
 *Return:Always 0 (Success)
 */
int print_last_digit(int c)
{
	int digit = c % 10;

	if (digit < 0)
		digit = digit * -1;
			_putchar(digit + '0');
			return (digit);


}
