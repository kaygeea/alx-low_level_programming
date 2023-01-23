#include "function_pointers.h"

/**
 * print_name - function that prints a name and to be called back
 * @name: incoming name argument for pointer to name
 * @f: function pointer
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	
	f(name);
}
