#include <stdio.h>
/**
 * main - the entry of the program
 * putchar - display information
 * Return: 0 if successful
 */
int main(void)
{
	char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
