#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: input value
 * @age: input value
 * @owner: input value
 * Return: puppy
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	int i, j, m;

	i = 0;
	j = 0;
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		free(puppy);
		return (NULL);
	}

	puppy->name = malloc(i * sizeof(puppy->name));
	if (puppy->name == NULL)
	{
		free(puppy->name);
		return (NULL);
	}

	for (m = 0; m <= i; m++)
		puppy->name[m] = name[m];
	puppy->age = age;
	puppy->owner = malloc(j * sizeof(puppy->owner));
	if (puppy->owner == NULL)
	{
		free(puppy->owner);
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	for (m = 0; m <= j; m++)
		puppy->owner[m] = owner[m];
	return (puppy);
}
