#include "main.h"
<<<<<<< HEAD

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
=======
#include <stdio.h>

/**
 * _isdigit - check id number are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
>>>>>>> origin
}
