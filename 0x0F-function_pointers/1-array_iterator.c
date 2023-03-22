#include "function_pointers.h"
#include<stdio.h>

/**
*array_iterator - Entry point
*@array: array pointer
*@size:size of array
*@action:funtion pointer
*Description:function given as a parameter on each elementin array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

int a;

if (array == NULL || action == NULL)
{
return;
}
for (a = 0; a < size; a++)
{
action(array[a]);
}
}


