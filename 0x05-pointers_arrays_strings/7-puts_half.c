#include "main.h"

/**
 *puts_half - Entry point
 *@str : string
 *Description:A function that prints half of a string
 *Return: 0
 */

void puts_half(char *str)
{
	int length, b, c;

	length = 0;

	for (b = 0; str[b] != '\0'; b++)

		length++;
	c = (length / 2);
	if ((length % 2) == 1)
		c = ((length + 1) / 2);
	for (b = c; str[b] != '\0'; b++)
		_putchar (str[b]);
	_putchar('\n');
}

