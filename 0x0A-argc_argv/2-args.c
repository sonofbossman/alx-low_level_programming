#include "stdlib.h"
#include "stdio.h"
/**
 * main - entry of the program
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
