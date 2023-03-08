#include "main.h"

int num_root(int a, int b);

/**
 *_sqrt_recursion - Entry point
 *@n:function parameter
 *Description:function that returns the natural square root of a number.
 *Return:squareroot of a natural number
 */



int _sqrt_recursion(int n)
{
	int b = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (num_root(n, b));

}

/**
 *num_root - Entry point
 *@b:parameter for the function
 *@a:function parameter
 *Return:num root
 */

int num_root(int a, int b)
{
	if ((b * b) == a)
	{
		return (b);
	}
	if (b == a / 2)
	{
		return (-1);
	}
else
		return (num_root(a, b + 1));
}
