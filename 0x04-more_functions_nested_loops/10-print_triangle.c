#include "main.h"
/**
 * print_triangle - Entry point
 * Description
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int rows, spaces, hashes;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (spaces = size - rows; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= rows; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
