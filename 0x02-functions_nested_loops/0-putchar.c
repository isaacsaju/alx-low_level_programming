#include "main.h"
/**
 * main - prints a string _putchar followed by a new
 * line.
 * Return: 0
 **/
int main(void)
{
	char name[8] = "_putchar";
	int i = 0;

	for (; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');

	return (0);
}

