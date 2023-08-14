#include <stdio.h>
/**
 * main -Entry point
 * Description
 * Return: always (0)
 */
int main(void)
{
	char n = 0;
	char lc = 'a';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (lc = 'a'; lc <= 'f'; lc++)
	{
		putchar(lc);
	}
		putchar('\n');
	return (0);
}
