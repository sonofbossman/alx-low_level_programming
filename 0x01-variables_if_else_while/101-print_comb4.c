#include <stdio.h>
/**
* main - entry of the program
* putchar - display information
* Return: 0 if successful
*/
int main(void)
{
	int a;
	int b;
	int c;

for (a = '0'; a < '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
for (c = b + 1; c <= '9'; c++)
{
if ((b != a) != c)
{
putchar(a);
putchar(b);
putchar(c);
if (a == '7' && b == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
