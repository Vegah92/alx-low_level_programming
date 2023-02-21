#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - Entry point
 *Description:A function thats  prints the alphabet in small letters
 *Return:Always 0 (Success)
 */
void print_alphabet(void)
{

char m;
for (m = 'a'; m <= 'z'; m++)
{
	_putchar(m);
}
_putchar('\n');


}
