#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @strcap: incoming argument
 *
 * Return: pointer to modified string
 */
char *cap_string(char *strcap)
{
	int i = 0;

	while (strcap[i])
	{
		while (!(strcap[i] >= 'a' && strcap[i] <= 'z'))
			i++;

		if (strcap[i - 1] == 32 ||
			strcap[i - 1] == '\t' ||
			strcap[i - 1] == '\n' ||
			strcap[i - 1] == 44 ||
			strcap[i - 1] == 59 ||
			strcap[i - 1] == 46 ||
			strcap[i - 1] == 33 ||
			strcap[i - 1] == 63 ||
			strcap[i - 1] == 34 ||
			strcap[i - 1] == 40 ||
			strcap[i - 1] == 41 ||
			strcap[i - 1] == 123 ||
			strcap[i - 1] == 125 ||
			i == 0)
			strcap[i] -= 32;
		i++;
	}
	return (strcap);
}
