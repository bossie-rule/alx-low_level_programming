#include "main.h"

/**
 * _strcat -  concatenates two strings, appends the src string
 * to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * then adds a terminating null byte
 * @dest: appends the two strings
 * @src: string to be appended
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
