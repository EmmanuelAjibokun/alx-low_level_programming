#include "dog.h"

/**
 * init_dog - initialize a varaible of type struct dog
 * @d: pointer to the object name
 * @name: input value
 * @age: input value
 * @owner: input value
 * return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
