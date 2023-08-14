#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return NULL;
	
	dog_t *newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return NULL;
	newDog->name = malloc(strlen(name) + 1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return NULL;
	}
	strcpy(newDog->name, name);
		newDog->age = age;
		newDog->owner = malloc(strlen(owner) + 1);
		if (newDog->owner == NULL)
		{
			free(newDog->name);
			free(newDog);
			return NULL;
		}
		strcpy(newDog->owner, owner);
		return newDog;
}
