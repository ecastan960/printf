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
		{"d"},
		{"%"},
		{NULL}
	};

	while (i < 5)
	{
		if (*f[i].c1 == c)
			return ((void *)1);
		i++;
	}
	return ((void *)(0));
}
