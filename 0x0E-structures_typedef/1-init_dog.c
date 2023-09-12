#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog.
 * @d: pointer to the struct dog.
 * @name: pointer to the name string.
 * @age: owners age.
 * @owner: pointer to the owner string.
 *
 * Description: This function initializes the members of a struct dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
