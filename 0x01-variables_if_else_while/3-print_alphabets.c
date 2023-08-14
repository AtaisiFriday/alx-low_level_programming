#include <stdio.h>
/**
 * main -Entry point
 * Description
 * Return: always (0)
 */
int main(void)
{
	char lc = 'a';
	char uc = 'A';

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}
		putchar('\n');
	return (0);
}
