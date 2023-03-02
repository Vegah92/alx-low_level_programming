#include "main.h"
/**
 *_strcat - Entry point
 *Description:A function thats strcat two strings
 *Return: A pointer
 *@dest:string pointer
 *@src:string pointer
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)

		for (b = 0; src[b] != '\0'; b++)
		{
			dest[a] = src[b];
			a++;
		}
	dest[a] = '\0';

	return (dest);
}

