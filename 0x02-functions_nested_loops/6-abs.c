#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: checks for the input
 *
 * Return: always zero (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
