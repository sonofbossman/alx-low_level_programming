#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the program
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if success & 1 if erroris encountered
 */
int main(int argc, char *argv[])
{
if (argc < 3 || argc > 3)
{
	printf("Error\n");
	return (1);
} else
{
int num1, num2, result;

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = (num1 *num2);
printf("%d\n", result);
}
return (0);
}
