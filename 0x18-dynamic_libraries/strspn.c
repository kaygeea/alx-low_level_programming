#include "main.h"
#include "string.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to be compared against
 * @accept: string to compare against s
 *
 * Return: Returns the number of bytes found to match
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counterlen = 0;

	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);

	unsigned int i, j;
	int flag;

	for (i = 0; i < len1; i++)
	{
		flag = 0;
		for (j = 0; j < len2; j++)
			if (accept[j] == s[i])
			{
				flag = 1;
				break;
			}
		if (flag == 0)
		{
			break;
		}
		else if (flag == 1)
			counterlen++;
	}
	return (counterlen);
}
