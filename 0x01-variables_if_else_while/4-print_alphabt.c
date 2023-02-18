#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description:this prints all letters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int first = 'a';
while (first <= 'z')
{
if ((first != 'q') && (first != 'e'))
{
putchar(first);
}
first++;
}
putchar('\n');
return (0);
}
