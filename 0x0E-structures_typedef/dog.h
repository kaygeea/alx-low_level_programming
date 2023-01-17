#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - a data type with three members
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: A structure creating data type struct dog, with three members
 * made up of 2 data types
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
