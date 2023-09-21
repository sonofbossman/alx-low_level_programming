#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13
 * @s: string to encode
 * Return: s
 */
char *rot13(char *s)
{
int i, j;

char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

char dr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == d1[j])
			{
				s[i] = dr[j];
				break;
			}
		}
	}
	return (s);
}
