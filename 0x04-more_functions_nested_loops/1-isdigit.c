#include "main.h"

/**
 *_isdigit - Entry point
 *@c : Number to be tested
 *Description:A function thats  that check for a digit 0 to 9
 *Return:Always 1 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
