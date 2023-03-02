#include "main.h"

/**
 *_strncat - Entry point
 *@dest:function parameters
 *@src:funtion parameters
 *@n:function parameter
 *Description:A function  that concatenates two strings
 *Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}

