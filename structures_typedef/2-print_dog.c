#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", d->name);
	}
	printf("\n");

	printf("Age : %f\n", d->age);

	printf("Owner:");
	if (d->owner == NULL)
	{
		printf("(nil)");
	}

	else
	{
		printf("%s", d->owner);
	}
	printf("\n");
}
