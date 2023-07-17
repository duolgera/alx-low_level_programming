#ifndef DOG_H
#define DOG_H

/** struct dog - structure of poppy
 * @name: pointer to the name of poppy
 * @age: age of poppy
 * @owner: pointer to the name of poppy
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* function prototoypes that can possibly be used */

dog_t *create_dog(char *name, float age, char *owner);
void print_dog(dog_t *d);
void free_dog(dot_t *d);

#endif
