#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a dog structure
 * @d: pointer to the dog structure
 * @name: pointer to the name of the dog
 * @age:Age of the dog
 * @owner: Pointer to the name of the owner
 */
void init_dog(dog_t *d, char *name, float age, char *owner);
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
