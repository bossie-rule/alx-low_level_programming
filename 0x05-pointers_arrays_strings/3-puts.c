#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str:  prints a string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		char(str[i]);
	}
	_putchar('\n');
}