#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: incoming argument for argument count
 * @argv: incoming argument for argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	if (argc > 0)
	{
		printf("%d\n", argc);
	}
	return (0);
}
