#include <stdio.h>
/**
 * main - entry of the program
 * putchar - print the alphabets
 * Return: 0 if successful
 */
int main(void)
{
	char sLetter = 'a';
	char cLetter = 'A';

while (sLetter <= 'z')
{
	putchar(sLetter);
	sLetter++;
}
while (cLetter <= 'Z')
{
	putchar(cLetter);
	cLetter++;
}
putchar('\n');
return (0);
}
