#include <stdio.h>
#include "main.h"
/**
 *_islower - Entry point
 * @c: this is the letter to be tested
 *Description:checks if  c is lowercase or uppercase  character
 *Return:0 or 1
 */
int _islower(int c)
{
return (c >= 97 && c <= 122);
}
