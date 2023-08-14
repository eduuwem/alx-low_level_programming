#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: pointer to the struct dog new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d ==NULL)
	d = malloc(sizeof(struct dog));
		
	d->name = name;
	d->age = age;
	d->owner = owner;
}
