#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	       printf("is positive %i\n", n);
	}
	else if (n == 0)
	{
		printf("is zero %i\n", n);
	}
	else
	{
		printf("is negative %i\n", n);
	}
	return (0);
}
