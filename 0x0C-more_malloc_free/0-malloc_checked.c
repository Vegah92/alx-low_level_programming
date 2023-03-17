#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*malloc_checked - entry point
*@b:function parameter
*Description: function that allocates memory using malloc
*Return: pointer to location
*/


void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);
if (a == NULL)
{
exit(98);
}
return (a);
}
