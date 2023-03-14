#include <stdlib.h>
#include "main.h"
/**
 * str_concat - entry point
 * @s1:function parameters
 * @s2:parameters
 * Description:function that concatenates two strings
 * Return:0
 */
char *str_concat(char *s1, char *s2)
{
	char *m;
	int a, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = c = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	m = malloc(sizeof(char) * (a + c + 1));
	if (m == NULL)
		return (NULL);
	a = c = 0;
	while (s1[a] != '\0')
	{
		m[a] = s1[a];
		a++;
	}
while (s2[c] != '\0')
{
m[a] = s2[c];
a++, c++;
}
conct[a] = '\0';
return (m);
}


