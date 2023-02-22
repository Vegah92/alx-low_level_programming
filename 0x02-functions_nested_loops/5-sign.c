#include <stdio.h>
#include "main.h"
/**
 *print_sign - Entry point
 *@n : any integer to be tested
 *Description: Test number to knowif it is +, - or zero
 *Return: +, - , 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}



}
