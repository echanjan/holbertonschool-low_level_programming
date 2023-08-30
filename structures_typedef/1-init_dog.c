#include "dog.h"
#include <stdlib.h>
/*
 * init dog - function that initialize a variable of type struct dog
 *
 * @d - pointer that points dog's sctructre
 * @name: name paremeter
 * @age: age panemeter
 * @owner: owner panameter
 *
 * return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
