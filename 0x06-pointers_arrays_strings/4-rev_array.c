#include "main.h"

/**
 *reverse_array - Entry point
 *@a : function parameter
 *@n : funtion parameter
 *Description:A function that reverse elements in an array
 *Return:Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int k;
	int b;

	for (k = 0; k < n; k++)
	{
		b = a[k];
		a[k] = a[n - 1];
		a[n - 1] = b;
		n--;
	}
}
