#include "main.h"


/**
 * *_strcpy - Entry point
 * @dest: parameters
 * @src: parameters
 *Description:A function that copies the string pointed to by src
 *Return:dest
 */


char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

