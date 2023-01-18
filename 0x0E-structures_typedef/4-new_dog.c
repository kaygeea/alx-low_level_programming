#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *bingo;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
	{
		free(bingo);
		return (NULL);
	}
	bingo->name = malloc(i * sizeof(bingo->name));
	if (bingo->name == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		bingo->name[k] = name[k];
	bingo->age = age;
	bingo->owner = malloc(j * sizeof(bingo->owner));
	if (bingo->owner == NULL)
	{
		free(bingo->owner);
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		bingo->owner[k] = owner[k];
	return (bingo);
}
