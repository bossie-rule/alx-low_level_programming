#include "main.h"

/**
 * _isdigit - Checks fo a digit 0-9
 * @c: checking the number
 *
 * Return: 1 if c is a digi otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
