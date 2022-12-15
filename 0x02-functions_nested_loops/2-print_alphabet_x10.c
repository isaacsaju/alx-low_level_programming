#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line
 **/
void print_alphabet_x10(void)
{
	char latter;
	int i;
	for (i = 0; i < 10; i++)
	{
		for (latter = 'a'; latter <= 'z'; latter++)
		{
			_putchar(latter);
		}
		_putchar('\n');
	}
}
