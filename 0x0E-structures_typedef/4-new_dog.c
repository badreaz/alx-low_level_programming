#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 * Return: pointer to dog_t, if failed NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j, n;

	if (name == NULL || owner == NULL)
		return(NULL);
	dog = malloc(sizeof(dog_t));
	for (i = 0; name[i]; i++)
		;
	dog->name = malloc(sizeof(char) * (i + 1));
	for (j = 0; owner[j]; j++)
		;
	dog->owner = malloc(sizeof(char) * (j + 1));
	if (dog == NULL || dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (n = 0; n <= i; n++)
		dog->name[n] = name[n];
	for (n = 0; n <= j; n++)
		dog->owner[n] = owner[n];
	dog->age = age;
	return (dog);
}
