#include "main.h"

/**
 *_strpbrk  - Entry point
 *@s: function parameter
 *@accept:function parameter
 *Description:A function thats  prints the alphabet in small letters 10 times
 *Return:accept
 */

char *_strpbrk(char *s, char *accept)
{
		int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}

