#include<stdio.h>

/**
 *string_toupper - Entry point
 *Description:A function that convert letters to upper case
 *Return: word
 *@word:function parameter
 */


char *string_toupper(char *word)
{
	int i;

	for (i = 0; word[i] != '\0'; i++)
	{
	if (word[i] >= 97 && word[i] <= 122)
	{
	word[i] = word[i] - 32;
	}
	}
	return (word);
}
