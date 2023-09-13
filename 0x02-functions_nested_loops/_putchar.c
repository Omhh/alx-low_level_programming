#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char c to the stdout
 *
 *@c: the character to print
 *
 * Return: on success one
*/

	int _putchar(char c)
{
	return (write(1, &c, 1));
}
