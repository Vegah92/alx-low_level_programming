#include <stdlib.h>
#include "main.h"

/**
*string_nconcat - entry point
*@s1:parameter
*@s2:second string
*@n:function parameter
*description:function that concatenates two strings
*Return:pointer to string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *m;
unsigned int a = 0, b = 0, st1 = 0, st2 = 0;

while (s1 && s1[st1])
st1++;
while (s2 && s2[st2])
st2++;
if (n < st2)
m = malloc(sizeof(char) * (st1 + n + 1));
else
m = malloc(sizeof(char) * (st1 + st2 + 1));
if (!m)
return (NULL);
while (a < st1)
{
m[a] = s1[a];
a++;
}
while (n < st2 && a < (st1 + n))
m[a++] = s2[b++];
while (n >= st2 && a < (st1 + st2))
m[a++] = s2[b++];
while (n >= st2 && a < (st1 + st2))
m[a++] = s2[b++];
m[a] = '\0';
return (m);
}
