#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - This function returns the length of a string.
 * @s: The string to return the length
 *
 * Return: Length of s
 */

int _strlen(char *s)
{
	long int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: The pointer to copy to
 * @src: The pointer to copy from
 *
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return NULL;	
	int len1 = _strlen(name);
	int len2 = _strlen(owner);
	new->name  = malloc(sizeof(char) * (len1 + 1));

	if (new->name == NULL)
		return NULL;

	new->owner = malloc(sizeof(char) * (len2 + 1));

	if (new->owner == NULL)
		return NULL;
	_strcpy(new->name, name);
	_strcpy(new->owner, owner);
	new->age = age;

	return new;
}

