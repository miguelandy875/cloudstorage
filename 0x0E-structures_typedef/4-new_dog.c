#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - creation
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  *
  * Return: result
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_c = 0, own_c = 0;

	if (name != NULL && owner != NULL)
	{
		name_c = _strlen(name) + 1;
		own_c = _strlen(owner) + 1;
		dog = malloc(sizeof(dog_t));

		if (dog == NULL)
			return (NULL);

		dog->name = malloc(sizeof(char) * name_c);

		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}

		dog->owner = malloc(sizeof(char) * own_c);

		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}

		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
		dog->age = age;
	}

	return (dog);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int ch = 0;

	for (; *s != '\0'; s++)
	{
		ch++;
	}

	return (ch);
}

/**
  * _strcpy - Copy a string
  * @dv: Destination value
  * @sv: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dv, char *sv)
{
	int i;

	for (i = 0; sv[i] != '\0'; i++)
	{
		dv[i] = sv[i];
	}

	dv[i++] = '\0';

	return (dv);
}
