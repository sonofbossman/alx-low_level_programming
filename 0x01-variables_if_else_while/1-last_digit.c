#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - The entry of the program
 * srand - Generate random numbers
 * printf - Display the output
 * Return: 0 if successful
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	/* your code goes there */
if (ld > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, ld);
else if (ld == 0)
	printf("Last digit of %d is %d and is 0\n", n, ld);
else if (ld < 6 && ld != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
return (0);
}
