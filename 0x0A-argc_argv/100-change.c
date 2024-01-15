#include "stdio.h"
#include "stdlib.h"
/**
 * main - entry of the program
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 if success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int count = 0;

if (argc == 2)
{
	int amount = atoi(argv[1]);

	if (amount <= 0)
		printf("%d\n", 0);
	else
	{
		while (amount > 0)
		{
			if (amount >= 25)
				amount -= 25;
			else if (amount >= 10)
				amount -= 10;
			else if (amount >= 5)
				amount -= 5;
			else if (amount >= 2)
				amount -= 2;
			else if (amount >= 1)
				amount -= 1;
			count += 1;
		}
		printf("%d\n", count);
	}
}
else
{
	printf("Error\n");
	return (1);
}
	return (0);
}
