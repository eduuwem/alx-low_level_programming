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

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);


#endif
