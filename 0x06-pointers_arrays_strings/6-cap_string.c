#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @strcap: incoming argument
 *
 * Return: pointer to modified string
 */
char *cap_string(char *strcap)
{
	int i;

	for (i = 0; strcap[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (strcap[i] >= 'a' && strcap[i] <= 'z')
				strcap[i] = strcap[i] - 32;
			continue;
		}
		if (strcap[i - 1] == 32)
		{
			if (strcap[i] >= 'a' && strcap[i] <= 'z')
			{
				strcap[i] = strcap[i] - 32;
				continue;
			}
		}
		if (strcap[i - 1] == ' ' && strcap[i] == 'h')
		{
			strcap[i] = strcap[i] - 32;
			continue;
		}
		else
		{
			if (strcap[i] >= 'A' && strcap[i] <= 'Z')
				strcap[i] = strcap[i] + 32;
		}
	}
	return (strcap);
}
