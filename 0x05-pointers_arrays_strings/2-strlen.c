#include "main.h"

/**
 * _strlen - a function that return the a string length, followed by
 * a new line, to stdout.
 * @s: an input string
 * Return: Nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
