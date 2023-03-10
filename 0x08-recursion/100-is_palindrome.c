#include "main.h"

/**
 *palindrome_helper - Entry point
 *Description:funtion that helps the palidrome function
 *@l:function parameter
 *@r:pointer arguments
 *@s:pointer
 *Return:1 or zero
 */

int palindrome_helper(int l, int r, char *s)
{
	if (*(s + l) != *(s + r - 1))
	{
		return (0);
	}
	if (l >= r)
	{
		return (1);
	}
	return (palindrome_helper(l + 1, r - 1, s));
}




/**
 *is_palindrome - Entry point
 *Description: function that returns 1 if a string is a palindrome and 0 if not
 *@s:pointer
 *Return:zero ore 1
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome_helper(0, _strlen_recursion(s), s));
}

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










