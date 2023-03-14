#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - entry point
 * @str:function parameters
 * Description:Returns a pointer to a newly allocated space in memory
 * Return:A pointer
 */

char *_strdup(char *str)
{

	char *b;


	int a, c = 0;



	if (str == NULL)
		return (NULL);


	a = 0;

	while (str[a] != '\0')


		a++;



	b = malloc(sizeof(char) * (a + 1));



	if (b == NULL)

		return (NULL);



	for (c = 0; str[c]; c++)


		b[c] = str[c];



	return (b);

}

