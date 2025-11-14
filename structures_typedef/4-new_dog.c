#include "dog.h"
#include "stdio.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (dog_t)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;

	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;
	dog->name = malloc(len1 + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(len2 + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		dog->name[i] = name[i];
	}
		dog->name[len1] = '\0';
	for (i = 0; i < len2; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->owner[len2] = '\0';

	dog->age = age;
	return (dog);
}
