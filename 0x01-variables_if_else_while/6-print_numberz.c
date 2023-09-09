#include <stdio.h>
/**
 * main - entry of the program
 * putchar - print out information
 * Return: 0 if successful
 */
int main(void)
{
	int num = 0;

while (num <= 9)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);
}
