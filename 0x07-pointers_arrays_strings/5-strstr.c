#include "main.h"
#define NULL 0

/**
 * _strstr - a function that scans string argument 1
 * for occurence of string argument 2 as a substring in it
 * @haystack: incoming string argument 1 to be scanned
 * @needle: incoming string argument 2 against which haystack will be scanned
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;

				else
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}

	return (NULL);
}
