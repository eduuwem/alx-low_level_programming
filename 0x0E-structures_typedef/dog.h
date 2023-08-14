#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that creates a puppy information
 * @name: the name of the dog
 * @age: dog age
 * @owner: the owner of the dog
 *
 * Description: define a newtype of struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
