#include "function_pointers.h"
#include<stdio.h>

/**
*print_name - Entry point
*@name:pointer to a string
*@f:function pointer
*description:function that prints a name.
*Return:Name
*/



void print_name(char *name, void (*f)(char *))
{

if (name == NULL || f == NULL)
{
return;
}
f(name);
}
