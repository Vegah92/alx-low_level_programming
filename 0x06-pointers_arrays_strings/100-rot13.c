#include "main.h"

/**
 *rot13 - Entry point
 *@m: function parameter
 *Description:A  function that encodes a string using rot13
 *Return:m
 */

char *rot13(char *m)
{
	int a, b;
	char k1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char k2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; m[a] != '\0'; a++)
	{
		for (b = 0; b <= 52; b++)
		{
			if (m[a] == k1[b])
			{
				m[a] = k2[b];
				break;
			}
		}
	}
	return (m);
}
