#include "main.h"

/**
 *_isupper - Entry point
 *@i : lettert to be tested.
 *Description:A function thats  prints 1 if a letter is uppercase
 *Return: 1 (Success)
 */

int _isupper(int i)
{


	if (i >= 65 && i <= 90)
	{
		return (1);
	}
	return (0);
}
