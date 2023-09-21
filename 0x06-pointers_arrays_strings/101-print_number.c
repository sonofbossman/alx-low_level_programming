#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int s;

	s = n;
	if (n < 0)
	{
		_putchar('-');
		s = -n;
	}
	if (s / 10 != 0)
	{
		print_number(s / 10);
	}
	_putchar((s % 10) + '0');
}
