#include <stdio.h>
/**
 * main - entry of the program
 * putchar - print out the letter
 * Return: 0 if successful
 */
int main(void)
{
	char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
	putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
