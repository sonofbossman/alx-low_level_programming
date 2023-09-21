#include "main.h"
/**
 * *leet - function that encodes a string into 1337
 * @p: string to encode
 * Return: p
 */
char *leet(char *p)
{
	int i, j;

	char str1[] = "aAeEoOtTlL";
	cahr str2[] = "4433007711";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] == str1[j])
			{
				p[i] = str2[j];
			}
		}
	}
	return (p);
}
