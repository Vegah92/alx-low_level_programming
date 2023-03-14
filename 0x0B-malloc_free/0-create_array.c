#include "main.h"

/**
 * create_array - entry  point
 * @size:function parameters
 * @c:parameters
 * Description:function that creates an array of chars, and initializes it with a specific char
 * Return:array
 */

char *create_array(unsigned int size, char c)
{

		char *ar;

	unsigned int b;

	ar = malloc(sizeof(char) * size);

	if (size == 0 || ar == NULL)

		return (NULL);

	for (b = 0; b < size; b++)
		ar[b] = c;

	return (ar);

}


