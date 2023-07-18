#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Struct representing a dog
 * @age: age of a dog
 * @owner: owner of a dog 
 * @name:name of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * int_dog -int a struct dog
 * dog_t -typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif 
