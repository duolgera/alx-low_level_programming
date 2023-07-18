#include "dog.h"
#include "stdio.h"

/**
 *print_dog - Prints the details of a dog structure
 *@d: pointer to the dog structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
