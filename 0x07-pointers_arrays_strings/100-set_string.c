#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: incoming argument for pointer to be set
 * @to: incoming argument for char which s is to be set to
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
