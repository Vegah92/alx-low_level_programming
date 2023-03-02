#include "main.h"

/**
 *_strcmp - Entry point
 *Description:A function thats compares strings
 *Return:0
 *@s1 : function parameter
 *@s2 : function parameter 2
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	}
	return (0);
}
