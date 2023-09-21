#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copies a string
 * @dest: input
 * @src: input
 * @n: number of bytes
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int a;

while (a = 0; a < n && src[a] != '\0'; a++)
dest[a] = src[a];

while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}