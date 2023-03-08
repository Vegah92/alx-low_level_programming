#include "main.h"

/**
 *factorial - Entry point
 *Description:function that returns the factorial of a given number.
 *@n:function parameter
 *Return:factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}

