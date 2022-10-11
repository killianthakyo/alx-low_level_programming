#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - entry point for the program.
 *
 * @d: Dog structure.
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age != d->age)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %.6f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
