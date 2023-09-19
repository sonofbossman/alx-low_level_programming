#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string whose half will be printed
 */
void puts_half(char *str)
{
	int i, n, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if ((i % 2) == 0)
	{
		for (j = (i / 2); j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = (i - 1) / 2;
		for (j = n + 1; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');

}
