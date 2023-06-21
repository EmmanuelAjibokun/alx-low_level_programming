#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize the value of dog
 * @d: struct name
 * @name: dog name
 * @age: dog age
 * @owner: owner's name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
