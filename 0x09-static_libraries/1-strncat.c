#include "main.h"

/**
 * _strncat - concatenates two strings uses most number bytes from src
 * @dest: appended string
 * @src: appende string to dest
 * @n: number of bytes from src to dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
