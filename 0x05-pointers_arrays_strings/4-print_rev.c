#include "main.h"
/**
 * print_rev - prints a reverse string
 * @s: string
 */
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
		r++;
	for (r = r - 1; r >= 0; r--)
		_putchar(s[r]);

	_putchar('\n');
}
