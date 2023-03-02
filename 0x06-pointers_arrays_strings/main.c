#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src);

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}

char *_strcat(char *dest, char *src)
{
        int a;
        int b;

        for (a = 0; dest[a] != '\0'; a++)
	{
	}

                for (b = 0; src[b] != '\0'; b++)
                {
                        dest[a] = src[b];
                        a++;
                }
        dest[a] = '\0';

        return (dest);
}
