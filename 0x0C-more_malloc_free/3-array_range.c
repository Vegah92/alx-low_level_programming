#include <stdlib.h>
#include "main.h"

/**
*array_range - entyr point
*@min:array parameters
*@max:function parameters
*Description:function that creates an array of integers
*Return:Array
*/
int *array_range(int min, int max)
{
int *tr;
int a, size;

if (min > max)
return (NULL);

size = max - min + 1;

tr = malloc(sizeof(int) * size);

if (tr == NULL)
return (NULL);

for (a = 0; min <= max; a++)

tr[i] = min++;

return (tr);
}
