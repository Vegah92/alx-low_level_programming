#include <stdio.h>
/**
 *main  - Entry point
 *Description: printing natural number
 *Return:Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum = sum + c;
		}
		c++;
	}
	printf("%i\n", sum);

	return (0);


}
