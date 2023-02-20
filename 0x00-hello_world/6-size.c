#include <stdio.h>
/**
 *main - Entry point
 *Description:program prints size of datat types
 *Return:Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
float d;

printf("Size of a char: %zu byte(s)", sizeof(a));
printf("size of int: %zu bytes(s)", sizeof(b));
printf("size of long int: %zu bytes(s)", sizeof(c));
printf("size of float: %zu bytes(s)", sizeof(d));


return (0);
}
