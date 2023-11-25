#define _POSIX_C_SOURCE 200809L
#include "bk_factor.h"

/**
 *main - Entry point for the program
 *
 *@argc: argument count of the program
 *@argv: Pointer to the argument of the program

 *Return: 0 always success
 */

int main(int argc, char *argv[])
{
	FILE *fptr;
	size_t count;
	ssize_t line;
	char *buffer = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}

	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while((line = getline(&buffer, &count, fptr)) != -1)
	{
		bk_factorize(buffer);
	}

        return (0);
}
