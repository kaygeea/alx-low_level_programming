#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: Object of struct dog
 * @name: First member of struct dog
 * @age: Second member of struct dog
 * @owner: Third member of struct dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
