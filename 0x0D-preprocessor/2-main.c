#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiled from
 * followed by a new line, using standard predefined macros
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
