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
long long int e;
float d;

printf("Size of a char: %zu byte(s)\n", sizeof(a));
printf("size of an int: %zu bytes(s)\n", sizeof(b));
printf("size of a long int: %zu bytes(s)\n", sizeof(c));
printf("size of a long int: %zu bytes(s)\n", sizeof(e));
printf("size of a float: %zu bytes(s)\n", sizeof(d));


return (0);
}
