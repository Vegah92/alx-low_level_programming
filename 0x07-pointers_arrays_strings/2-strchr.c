#include "main.h"

/**
 *_strchr - Entry point
 *@s:pointer to function
 *@c:c function parameter
 *Description:A function that locates a character in a string
 *Return: s
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (0);
}
