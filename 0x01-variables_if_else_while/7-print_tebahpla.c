#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description:programs print z - a
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int first = 'z';
while (first >= 'a')
{
putchar(first);
first--;
}
putchar('\n');
return (0);
}
