#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct (dog)
 * @d: pointer to the struct
 * Return: void
 */

void print_dog(struct dog *d)

{
	if (d  != NULL)

	{
		printf("Dog's name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Dog's age is: %f\n", d->age);
		printf("owner: ");
		d->owner == NULL ? printf("(nil)\n)") : printf("%s\n", d->owner);
	}
}
