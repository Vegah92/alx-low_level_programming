#include "main.h"

/**
 *_strlen_recursion - Entry point
 *Description:function that returns the length of a string.
 *Return:lenth of string
 *@s:string parameter
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
