#include "main.h"

/**
 * _strcat - a function that concatenate two strings
 * and the adds a terminating null byte.
 *
 * @dest: An input string
 *
 * @src: An input string
 *
 * Return: the resulting dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}
	
	*dest = '\0';

	return (temp);
}
