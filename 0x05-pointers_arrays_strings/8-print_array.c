#include "main.h"


/**
 *print_array - Entry point
 *@n:function parameters
 **a: function parameters
 *@a: return value
 *Description:A function thats prints elements in an array
 *Return: a and c inputs
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d ", a[c]);
	}
	if (c == (n - 1))
	{
		printf("%d ", a[n - 1]);
	}
	printf("\n");
}
