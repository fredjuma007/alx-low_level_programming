#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog var
 * @d: struct of dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("name: (ni1)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (ni1)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}