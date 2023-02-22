#include <stdio.h>
#include "main.h"
/**
 *_isalpha - Entry point
 * @c: this is the letter to be tested
 *Description:checks if  c is lowercase or uppercase  character
 *Return:0 or 1
 */
int _isalpha(int c)
{
return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
