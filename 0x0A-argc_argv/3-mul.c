#include<stdlib.h>
#include<stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc:argument count
 * @argv:argument vector
 * Return:0
 */


int main(int argc, char *argv[])
{
	int i, j = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = j * atoi(argv[i]);

		}
		printf("%d\n", j);
	}
	else
	{
		printf("error\n");
	}
	return (0);
}
