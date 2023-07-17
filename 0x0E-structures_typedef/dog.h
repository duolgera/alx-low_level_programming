#ifndef DOG_H
#define DOG_H

/**
 * struct dog - sturcture of poppy
 * @name: pointer to name of poppy
 * @age: age of poppy
 * @owner: pointer to the name of poppy
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
