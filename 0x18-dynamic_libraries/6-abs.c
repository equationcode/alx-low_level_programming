#include "main.h"

/**
 * _abs - function that computes absolute value of integer
 *
 * @a: parameter to be checked
 *
 * Return: a on success
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
