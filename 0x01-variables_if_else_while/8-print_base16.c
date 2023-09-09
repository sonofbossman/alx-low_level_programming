#include <stdio.h>
/**
 * main - the entry of the program
 * putchar - display information
 * Return: 0 if successful
 */
int main(void)
{
	char i;
	char hex;

for (i = '0'; i <= '9'; i++)
{
putchar(i);
}

for (hex = 'a'; hex <= 'f'; hex++)
{
putchar(hex);
}
putchar('\n');
return (0);
}
