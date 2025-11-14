#ifndef DOG_H
#define DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * struct dog - structure for dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
