#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the elements of a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: If an element of d is NULL, it prints (nil) instead.
 * If d is NULL, it prints nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
