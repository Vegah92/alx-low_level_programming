#include "variadic_functions.h"

/**
*sum_them_all-entry point
*@n:function arguments
*Description:returns the sum of all its parameters
*Return:Result
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int result = 0, i;

if (n == 0)
{
return (0);
}
else
{
va_list numbers;
va_start(numbers, n);

for (i = 0; i < n; i++)
{
result =  result + va_arg(numbers, unsigned int);
}
va_end(numbers);
return (result);
}
}
