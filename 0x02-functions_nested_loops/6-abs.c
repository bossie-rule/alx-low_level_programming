#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
