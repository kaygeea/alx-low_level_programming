#include "main.h"

/**
 * more_numbers - prints numbers 10 times
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
