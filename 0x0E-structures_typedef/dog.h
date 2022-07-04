#ifndef _DOG_
#define _DOG_

/**
 * struct dog - list dates about pet
 * @name: pet name
 * @age: pet age
 * @owner: pet owner name
*/
 typedef struct dog

{
char *name;
		float age;
			char *owner;
			} dog_t;

			void init_dog(struct dog *d, char *name, float age, char *owner);
			void print_dog(struct dog *d);
			dog_t *new_dog(char *name, float age, char *owner);
			char *dup_strint(char *s);
			void free_dog(dog_t *d);

#endif
