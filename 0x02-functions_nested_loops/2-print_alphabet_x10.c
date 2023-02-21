#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *Description:A function thats  prints the alphabet in small letters 10 times
 *Return:Always 0 (Success)
 */
void print_alphabet_x10(void)
{

char m;
int a;
for (a = 0; a <= 9; a++)
{
for (m = 'a'; m <= 'z'; m++)
{
_putchar(m);
}
_putchar('\n');
}

}
