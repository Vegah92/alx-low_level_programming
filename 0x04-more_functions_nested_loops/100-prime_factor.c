#include <stdio.h>
#include <math.h>

/**
 *main - Entry point
 *Description: largest prime factor of the number 612852475143
 *Return:Always 0 (Success)
 */

int main(void)
{
	long x, factor;
	long number = 612852475143;
	double root = sqrt(number);

	for (x = 1; x <= root; x++)
	{
		if (number % x == 0)
		{
			factor = number / x;
		}
	}
				printf("%ld\n", factor);
				return (0);
}

