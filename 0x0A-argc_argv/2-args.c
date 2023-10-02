#include <stdio.h>
/**
 * main - entry of the program
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
while (argc--)
{
	printf("%s\n", *argv++);
}
return (0);
}
