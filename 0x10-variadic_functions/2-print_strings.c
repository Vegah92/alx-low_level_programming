#include "variadic_functions.h"

/**
* print_strings - Entry point
* @separator: string to be printed between strings.
* @n:counts the number of stringd
* @...:variadic indicator
* Description:prints strings, followed by a new line
*/
	void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int i;

va_start(strings, n);

for (i = 0; i < n; i++)
{
str = va_arg(strings, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
va_end(strings);
printf("\n");
}

