#include "main.h"


/**
 *puts2 - Entry point
 *@str:string
 *Description:A function that prints every other character of a string,
 *Return: 0 (Success)
 */

void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *m = str;
	int a;

	while (*m != '\0')
	{
		m++;
		length++;
	}
	i = length - 1;
	for (a = 0; a <= i; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
