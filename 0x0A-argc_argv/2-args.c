#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: incoming argument for argument count
 * @argv: incoming argument for argument vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
