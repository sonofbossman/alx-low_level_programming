#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
* main - The entry of the program
* write - Print an error message
* Return: 1 (success)
*/

int main(void)
{
char *mssg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, mssg, strlen(mssg));
return (1);
}
