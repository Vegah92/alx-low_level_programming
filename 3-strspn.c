#include "main.h"

/**
 *_strspn - Entry point
 *@s: function parameter
 *@accept:function parameters
 *Description:A function that gets the length of a prefix substring
 *Return:Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			if (accept[b + 1] == '\0')
				return (a);
		}
	s++;
	}
	return (a);
}
