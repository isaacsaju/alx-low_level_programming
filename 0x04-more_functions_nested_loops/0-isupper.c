#include "main.h"

/**
 * _isupper - Checker main
 * Descriptions: the function uses puchar to print alphabets
 * @c: an input character.
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	int i;
	int num = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			num = 1;
	}

	return (num);
}
