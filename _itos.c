#include "holberton.h"
/**
 * _itos - function that converts a number to strings
 * @a: input number
 * Description: return a string from a number
 * Return: str
 */
char *itos(int a)
{
	long int i, n = 1, b, s = 0, c, d;
	char *str;

	b = a;
	if (a < 0)
	{
		b = -b, c = b, s = 1, d = 0;
	}
	else
	{
		c = b, d = 1;
	}
	while (b >= 10)
	{
		if (b >= 10)
		{
			b = b / 10;
		}
		n++;
	}
	str = (char *)malloc((n + 1 + s) * sizeof(char));
	for (i = 0; i < n; i++)
	{
		str[n - i - d] = (c % 10) + 48;
		c = c / 10;
	}
	str[n + s] = '\0';
	if (s == 1)
	{
		str[0] = '-';
	}
	return (str);
}
