#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: incoming argument for argument count
 * @argv: incoming argument for argument vector
 *
 * Return: 0 on success, or 1 if otherwise
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
