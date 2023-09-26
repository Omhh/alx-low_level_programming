#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: array of int
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
int n, s1 = 0, s2 = 0;

for (n = 0; n < size; n++)
{
s1 += a[n];
s2 += a[size -n -1];
a += size;
}
printf("%d, ", s1);
printf("%d\n", s2);
}
