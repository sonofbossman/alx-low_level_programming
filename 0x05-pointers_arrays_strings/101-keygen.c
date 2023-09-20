#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry of the program
 * Return: 0 always
 */
int main(void)
{
	int a;
	char b;

	srand(time(NULL));
	a = 0;
	while (a <= 2645)
	{
		b = rand() % 128;
		a += b;
		putchar(b);
	}
	putchar(2772 - a);
	return (0);
}
