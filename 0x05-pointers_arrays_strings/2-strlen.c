#include "main.h"

/**
 *_strlen - Entry point
 *@s : pointer
 *Description:A function thats  prints the length of a string
 *Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
