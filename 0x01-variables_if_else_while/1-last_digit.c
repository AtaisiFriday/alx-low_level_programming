#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 * Description
 * Return: always (0)
 */
int main(void)
{
	int n;
	int fd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	fd = n % 10;
	if (fd > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, fd);
	}
	else if (fd == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, fd);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, fd);
	}
	return (0);
}
