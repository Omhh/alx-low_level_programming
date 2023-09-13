#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: chaecks for input
 *
 * Return: one if lowercase .. zero if otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
