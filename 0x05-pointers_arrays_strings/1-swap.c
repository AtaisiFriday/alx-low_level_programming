#include "main.h"
/**
 * swap_int - exchanges the value of two integers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
