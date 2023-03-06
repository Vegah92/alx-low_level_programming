#include "main.h"

/**
 *_memset - Entry point
 *Description:A function that fills memory with a constant byte
 *@s: function parameter
 *@b:function parameter
 *@n: number of bytes
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)

		s[a] = b;

	return (s);
}


