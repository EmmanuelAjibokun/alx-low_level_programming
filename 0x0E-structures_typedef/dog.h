#ifndef DOG
#define DOG

/**
 * struct dog - is a structure for a dog object
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif