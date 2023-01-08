#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @lcstrng: incoming argument
 *
 * Return: pointer to modified string
 */
char *string_toupper(char *lcstrng)
{
	int i;

	for (i = 0; lcstrng[i] != '\0'; i++)
	{
		if (lcstrng[i] >= 'a' && lcstrng[i] <= 'z')
		{
			lcstrng[i] = lcstrng[i] - 32;
		}
	}
	return (lcstrng);
}
