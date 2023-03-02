#include "main.h"

/**
 *cap_string - Entry point
 *@k:function parameter
 *Description:A function that capitalizes all words of a string
 *Return: k
 */


char *cap_string(char *s)
{
         int i = 0;
    for(i=0; s[i] != '\0'; i++)
    {
         if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
         {
             s[i];
         }
else if (s[i-1]=='.h' || s[i-1]=='\t' || s[i-1]==' ' || s[i -1] == '\n' && s[i]>='a' && s[i]<='z')
       {
            s[i]=s[i] - 32;
       }
    }
    return (s);
}
