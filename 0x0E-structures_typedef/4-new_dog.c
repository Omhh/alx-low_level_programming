#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - gets length of string
 * @str: the string to get the length
 * Return: length of string
*/

int _strlen(const char *str)
{
int length = 0;
while (*str++)
length++;
return (length);
}

/**
 * _strcopy - returns @dest with a copy of a string from @src
 * @src: string to copy
 * @dest: copy string
 * Return: @dest
*/

char *_strcopy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';

return (dest);
}

/**
 * new_dog - a function creats a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct pointer dog Null if fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

if (!name || age < 0 || owner)
return (NULL);

dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

if ((*dog).owner == NULL)
{
free(dog->owner);
free(dog);
return (NULL);
}

dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);
return (dog);
}
