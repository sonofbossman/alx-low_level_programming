#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: integer to get its absolute value
 * Return: c
 */
int _abs(int c)
{
	int abs_val;

	if (c < 0)
	{
	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
