#include <stdio.h>

/**
 * main - prints all arguments given
 * @argc: number of arguments given to the program
 * @argv: arrayof pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
