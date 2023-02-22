#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - Entry point
 *@n : interger value
 *Description:print all natural numbers from 0 to 98
 *Return:Always 0 (Success)
 */
void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		printf("%i, ", n);
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--
	}
	printf("98");
	printf("\n");
}
