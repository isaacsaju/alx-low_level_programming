#include "main.h"
#include <stdio.h>
/**
 * main - a function that print it file name.
 * @argc: argument count
 * @argv: argument value, a string array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
