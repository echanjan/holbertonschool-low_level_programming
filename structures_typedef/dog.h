#ifndef DOG_H
#define DOG_H
/*
 *struct dog - struct that contains the dog info
 * 
 *@name - name dog
 *@age - age dog
 *@owner - owner dog
 */
struct dog{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
