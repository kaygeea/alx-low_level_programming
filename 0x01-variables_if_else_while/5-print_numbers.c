#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int b = 1;

	while (b < 10)
	{
		printf("%d", b);
		b++;
		printf("\n");
	}
	return (0);
}
