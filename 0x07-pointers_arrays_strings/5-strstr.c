#include "main.h"
#include <string.h>

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
	int haystacklen = strlen(haystack);
	int needlelen = strlen(needle);

	int i, j;
	int flag;

	for (i = 0; i < haystacklen; i++)
		if (haystack[i] == needle[i])
		{
			flag = 0;
		}
	for (j = 0; j < needlelen; j++)
		if (haystack[i + j] != needle[j])
		{
			flag = 1;
			break;
		}
	if (flag == 0)
	{
		return (NULL);
	}
	else
		return (&haystack[i]);
}
