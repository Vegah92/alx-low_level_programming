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
	last_digit = c % 10;
	if (last_digit < 0)
		last_digit = last_digit * -1;
			_putchar(last_digit + '0');
			return (last_digit);


}
