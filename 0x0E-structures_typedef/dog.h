#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure of dog
 * @name : name of dog (mine is Cujo)
 * @age: age of dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
