#include "stdlib.h"
#include "stdio.h"
#include "ctype.h"
/**
 * main - entry of the program
 * @argc: argument count
 * @argv: array of arguments
 * atoi - converts string to int
 * Return: 0 if success, 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int res = 0;
	int i;

	if (argc ==  1)
	{
		printf("%d\n", res);
	} else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
