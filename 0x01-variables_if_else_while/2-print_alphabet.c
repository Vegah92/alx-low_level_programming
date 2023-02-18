#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int first = 'a';
while (first <= 'z')
{
	putchar(first);
	first++;
}
putchar('\n');
return (0);
}
