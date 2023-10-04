#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: sring
 * Return: length of the string
 */

int _strlen(char *s)
{
int size;

for (size = 0; s[size] != '\0'; size++)
;
return (size);
}

/**
 * argstostr - oncatenates all the arguments of your program.
 * @ac: int
 * @av: arguments
 * Return: string
*/

char *argstostr(int ac, char **av)
{
int i = 0, nc = 0, j = 0, cmpt = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);

for (; i < ac; i++, nc++)
nc += _strlen(av[i]);

s = malloc(sizeof(char) * nc + 1);
if (s == 0)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, cmpt++)
s[cmpt] = av[i][j];

s[cmpt] = '\n';
cmpt++;
}

s[cmpt] = '\0';
return (s);
}
