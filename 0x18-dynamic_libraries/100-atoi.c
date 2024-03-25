#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string to be converted into integer
 * Return: counts
 */
int _atoi(char *s)
{
	unsigned int c = 0, x = 0, i = 0;
	unsigned int p = 1, m = 1, j;

	while (*(s + c) != '\0')
	{
		if (x > 0 && (*(s + c) < '0' || *(s + c) > '9'))
		{
			break;
		}
		if (*(s + c) == '-')
		{
			p *= -1;
		}
		if ((*(s + c) >= '0') && (*(s  + c) <= '9'))
		{
			if (x > 0)
			{
				m *= 10;
			}
			x++;
		}
		c++;
	}
	for (j = c - x; j < c; j++)
	{
		i = i + ((*(s + j) - 48) * m);
		m /= 10;
	}
	return (i * p);
}
