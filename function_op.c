#include "holberton.h"
/**
 * fop - prints a string as integer
 *
 * @c: next character to evaluate
 *
 * Return: contador_fi
 */
int *fop(char c)

{
	int i = 0;
	sel_format f[] = {
		{"c"},
		{"s"},
		{"i"},
		{"%"},
		{NULL}
	};

	while (i < 4)
	{
		if (*f[i].c1 == c)
			return (1);
		i++;
	}
	return (0);
}
