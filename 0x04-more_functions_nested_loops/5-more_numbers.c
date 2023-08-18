#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14 in 10 places
 * Return: void
 */
void more_numbers(void)
{
	int l, c;

	for (l = 1; l <= 10; l++)
	{
		for (c = 0; c <= 14; c++)
		{
				_putchar('1');
				_putchar(c % 10 + '0');
		}
			_putchar('\n');
	}
}
