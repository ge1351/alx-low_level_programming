#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - Prints attributes of `d` dog. Prints "(nil)" if attribute has no
 * value
 * @d: Pointer to instance of struct dog
 */
void print_dog(struct dog *d)
{
		if (d == NULL)
					return;

			printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));
				printf("Age: %f\n", d->age);
					printf("Owner: %s\n", (d->owner != NULL ? d->owner : "(nil)"));
}
