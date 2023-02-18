#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description:prints upper and loer case letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int lower = 'a';
int upper = 'A';

while (lower <= 'z')
{
putchar(lower);
lower++;
}
while (upper <= 'Z')
{
	putchar(upper);
	upper++;
}
putchar('\n');
return (0);
}
