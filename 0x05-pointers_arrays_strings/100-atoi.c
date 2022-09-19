#include "main.h"

/**
 * _atoi - converts to integer
 * @s: character array string
 *
 * Return: first integer found in string
 */
int _atoi(char *s)
{
	int i;
	int b, c;

	b = 0;
	c = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			c *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (b < 0)
				b = (b * 10) - (s[i] - '0');
			else
				b = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (c < 0)
		b *=  -1;

	return (b);
}
