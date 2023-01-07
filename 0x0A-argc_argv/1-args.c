#include "main.h"
#include <stdio.h>

/**
 * main - a function that print the number of arguments passed into it
 * @argv: a string array argument
 * @argc: an int argument
 * Return: int 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
