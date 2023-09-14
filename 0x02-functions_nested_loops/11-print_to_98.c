#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to ninety eight
 *
 * @n: checks for the input
 *
 *
 */

void print_to_98(int n)
{
	int a = n;

	if (n < 98)
		for (; a < 98; a++)
			printf("%d, ", a);

	else
		for (; a > 98; a--)
			printf("%d, ", a);
	printf("98\n");

}
