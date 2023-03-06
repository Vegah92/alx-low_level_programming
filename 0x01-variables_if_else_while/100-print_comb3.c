#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *Description:program prints the combination of two numbers
 *Return:Always 0 (Success)
 */

int main(void)
{
int a ;
int b ;
for (a = 0; a <= 9; a++)
{
for  (b != a; b > a; b++)
{
putchar(a);
putchar(b);

}
putchar(',');
putchar(' ');
}
return (0);
}
