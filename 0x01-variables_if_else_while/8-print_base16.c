#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:print numbers 0 to 16 hexadecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
int letter;
for (a = 0; a <= 9; a++)
{
putchar((a % 10) + '0');
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
