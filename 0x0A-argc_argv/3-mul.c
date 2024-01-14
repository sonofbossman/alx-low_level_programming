#include "stdlib.h"
#include "stdio.h"
/**
 * main - entry of the program
 * @argc: argument count
 * @argv: array of arguments
 * atoi - converts string to int
 * Return: 0 if success, 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc > 2)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
