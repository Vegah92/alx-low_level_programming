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
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
