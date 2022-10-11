#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * init_dog - entry point for the program.
 *
 * @d: Dog structure.
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(d));

	if (d == 0)
	{
		return;
	}

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
