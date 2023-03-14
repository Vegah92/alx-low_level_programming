#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - entry point
 * @width:function parameter
 * @height:parameter
 * Description:function that returns a pointer to a 2 dimensional array
 * Return:0
 */

int **alloc_grid(int width, int height)
{
	int **b;
	int a, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	b = malloc(sizeof(int *) * height);
	if (b == NULL)
		return (NULL);
			for (a = 0; a < height; a++)
			{
				b[a] = malloc(sizeof(int) * width);
				if (b[a] == NULL)
				{
				for (; a >= 0; a++)
				{
				free(b[a]);
				free(b);
				return (NULL);
				}
				}
				}
			for (a = 0; a < height; a++)
				{
				for (y = 0; y < width; y++)
				b[a][y] = 0;
				}
				return (b);
}
