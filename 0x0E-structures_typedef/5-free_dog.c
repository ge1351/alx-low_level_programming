#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - Frees all memory allocated by a dog_t struct
 * @d: Pointer to the struct to be freed
 */
void free_dog(dog_t *d)	
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
