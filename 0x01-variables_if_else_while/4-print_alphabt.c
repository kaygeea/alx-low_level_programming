#include <stdio.h>

/**
 * main - print the alphabet in lowercase, with the exception of q and e
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if ((ch != 'q') && (ch != 'e'))
			putchar(ch);
	putchar ('\n');
	return (0);
}
