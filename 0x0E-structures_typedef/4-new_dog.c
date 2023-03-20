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
	char *mname;
	char *mowner;
	int i, j, n;

	dog = malloc(sizeof(dog_t));
	for (i = 0; name[i]; i++)
		;
	mname = malloc(sizeof(char) * i);
	for (j = 0; owner[j]; j++)
		;
	mowner = malloc(sizeof(char) * j);
	if (dog == NULL || mname == NULL || mowner == NULL)
	{
		free(mname);
		free(mowner);
		free(dog);
		return (NULL);
	}
	for (n = 0; n <= i; n++)
		mname[n] = name[n];
	for (n = 0; n <= j; n++)
		mowner[n] = owner[n];
	dog->name = mname;
	dog->age = age;
	dog->owner = mowner;
	return (dog);
}
