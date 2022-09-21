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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
