#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog memory
 * @d: pointer to struct object
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
