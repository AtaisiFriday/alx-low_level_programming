#include "main.h"
/**
 * print_line - draw a straight line
 * @n: number of times
 * Return: always 0
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
