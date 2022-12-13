#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch < 10; ch++)
		putchar(ch);
	return (0);
}
