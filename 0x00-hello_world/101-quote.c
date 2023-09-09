#include <stdio.h>

/**
* main - The entry of the program
* fprintf - Print an error message
* Return: 1 (success)
*/

int main(void)
{
char *mssg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fprintf(stderr, "%s", mssg);
return (1);
}
