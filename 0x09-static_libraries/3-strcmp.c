#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: input
 * @s2: input
 * Return: 1 if true , 0 if false
*/
int _strcmp(char *s1, char *s2)
{
int a = 0;

while (*s1)
{

if (*s1 != *s2)
{
a = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (a);
}
