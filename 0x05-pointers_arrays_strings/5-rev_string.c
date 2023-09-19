#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, j;

	char str;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		str = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = str;
	}
}
