#include "function_pointers.h"

/**
 * print_pname - prints a name
 * @name: string name
 * @f: printing function pointer
 *
 * Return: void
*/

void print_pname(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
