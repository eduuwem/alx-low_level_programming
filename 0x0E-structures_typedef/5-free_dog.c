#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free memmory of dog crested
 * @d: pointer to dog_t
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
