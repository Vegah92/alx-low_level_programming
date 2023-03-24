#include "variadic_functions.h"

/**
*print_numbers - Entry point
*@separator:parameter
*@n:constant paramtere
*Description: prints numbers, followed by a new line.
*Return:digit
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list digits;
va_start(digits, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(digits, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
va_end(digits);
printf("\n");
}

