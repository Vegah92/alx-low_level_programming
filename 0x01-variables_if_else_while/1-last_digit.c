#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Description:This program will a print the last digit of n
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
printf("Last digit of %d is", n);
res = n % 10;
if (res > 5)
{
printf("%d and is greater than 5\n", res);
}
else if ((res < 6) && (res < 0))
{
printf("%d and is less than 6 and not 0\n", res);
}
else
{
printf("%d and is 0\n", res);
}
	/* your code goes there */
return (0);
}
