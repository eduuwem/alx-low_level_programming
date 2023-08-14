#include "dog.h"
#include <stdio.h>

/**
 * print_dog - fuction that prints struct dog
 *
 *@d: new dog of struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!((*d).name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}

}
