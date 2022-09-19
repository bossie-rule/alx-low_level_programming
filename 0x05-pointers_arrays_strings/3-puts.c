#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str:  prints a string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
