#include "main.h"

/**
 **_memcpy - Entry point
 *@dest:pointer
 *@src:function parameters
 *@n: unsinged interger
 *Description:A function thats copies memory area
 *Return:dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
