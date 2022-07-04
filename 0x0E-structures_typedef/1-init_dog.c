#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a dog struct
 * @d: Pointer to instance of dog struct
 * @name: Pointer to the first character of the string of the desired name
 * @age: The desired age as a float
 * @owner: Pointer to the first character of the string of the desired owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
	          			return;

			d->name = name;
				d->age = age;
}					d->owner = own
