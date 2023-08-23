#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input
 * Return: reversed string
 */
void rev_string(char *s)
{
	char l = s[0];
	int c = 0;
	int a;

	while (s[c] != '\0')
		c++
	for (a = 0; a < c; a++)
	{
		c--;
		l = s[a];
		s[a] = s[c];
		s[c] = l;
	}
}
