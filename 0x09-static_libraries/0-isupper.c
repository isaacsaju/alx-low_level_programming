#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: an input character
 * Return: 1 if c is uppercase otherwise return 0.
 */
int _isupper(char c)
{
	char uppercase = 'A';
	int value = 0;

	for (; uppercase <= 'Z'; uppercase++)
		if (c == uppercase){
			value = 1;
			break;
		}

	return (value);
}
