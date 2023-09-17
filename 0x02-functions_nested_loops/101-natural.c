#include <stdio.h>
/**
 * main - entry of the program
 * Return: 0 always
 */
int main(void)
{
	int i, result;

	result = 0;

for (i = 3; i < 1024; i++)
{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
		result += i;
	}
}
printf("%d\n", result);
return (0);
}
