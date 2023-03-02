#include "main.h"

/**
 *_strncpy - Entry point
 *Description:A function thats copies a string.
 *Return:dest
 *@src: function parameters
 *@n: function parameter
 *@dest : function parameter
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

