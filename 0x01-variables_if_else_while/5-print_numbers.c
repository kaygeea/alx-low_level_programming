#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
		printf("%d ", b);
		b++;
	}
	return (0);
}
