#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be determined
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int str_len;

	str_len = 0;

	while (s[str_len] != '\0')
	{
		str_len++;
	}
	return (str_len);
}
