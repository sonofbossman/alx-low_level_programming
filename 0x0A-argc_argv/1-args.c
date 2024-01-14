#include "stdlib.h"
#include "stdio.h"
/**
 * main - entry of the program
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 if success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
