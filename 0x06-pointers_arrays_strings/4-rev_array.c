#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: input
 * @n: input
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
int z, b, c;

for (z = 0, b = (n - 1); b < z; z++, b--)
{
c = a[z];
a[z] = a[b];
a[b] = c;
}
}
