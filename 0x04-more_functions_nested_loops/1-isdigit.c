#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: The variable to be checked
 * Return: (1) if variable is a digit and (0) if otherwise
 */
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
