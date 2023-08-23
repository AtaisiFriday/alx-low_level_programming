#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, cgar *src)
{
	int len = o;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
