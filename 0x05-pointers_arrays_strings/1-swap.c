#include "main.h"

/**
 * swap_int - a function that swap two integers
 * @a: first int
 * @b: second int
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
