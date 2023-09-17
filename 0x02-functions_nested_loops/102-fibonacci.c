#include "main.h"
#include <stdio.h>
/**
 * main - entry of the program
 * Return: 0 always
 */
int main(void)
{
	int i;
	long fib1 = 1, fib2 = 2, next;
for (i = 1; i <= 50; i++)
{
if (i == 1)
{
	printf("%ld", fib1);
}
else
{
	printf(", %ld", fib1);
}
next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
}
printf("\n");
return (0);
}
