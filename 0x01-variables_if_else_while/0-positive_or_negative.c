#include <stdlib.h>
#include <time.h>
#include <stdio>

/**
 * main - check if numbr is neg or pos
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n == 0)
	{
		printf("is zero\n");
	} else
	{
		printf("is negative\n");
	}
	printf("exact value of n is: %d\n", n);

	return (0);
}
