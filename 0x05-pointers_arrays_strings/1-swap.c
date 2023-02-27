#include "main.h"

/**
 *swap_int - Entry point
 *@a : pointers
 *@b : pointers 2
 *Description:A function thats  swap intergers, using pointers as parameters
 *Return:Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}

