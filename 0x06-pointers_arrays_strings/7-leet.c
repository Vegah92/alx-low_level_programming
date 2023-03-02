#include "main.h"

/**
 *leet - Entry point
 *@s:function parameters
 *Description:A function that encodes a string into 1337
 *Return: s
 */

char *leet(char *s)
{
	int a, b;
	char m1[] = "aAeEoOtTlL";
	char m2[] = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == m1[b])
			{
				s[a] = m2[b];
			}
		}
	}
return (s);
}
