#include <stdio.h>
/**
 * main - the entry of the program
 * putchar - print out the letter
 * Return: 0 if successful
 */
int main(void)
{
	char letter = 'a';

while (letter <= 'z')
{
	putchar(letter);
	letter++;
}
putchar('\n');
return (0);
}
