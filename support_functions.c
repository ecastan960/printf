#include "holberton.h"
/**
 * _putchar - prints one character at a time
 * @c: char to print
 * Return: cero
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
/**
 * putstring - prints a string
 * @str: pointer to string to print
 * @c: count the string size
 * @i: moves the main string counter one position
 */
void putstring(char *str, int *c, int *i)
{
	int a;

	for (a = 0; str[a]; a++)
	{
		_putchar(str[a]);
		*c = *c + 1;
	}
	*i = *i + 1;
}
/**
 * puts_integer - prints a string como integer
 * @in: pointer to integer to print
 * @c: count the string size
 * @i: moves the main string counter one position
 */
void puts_integer(int in, int *c, int *i)
{
	char *p_string_itos;
	int a;

	p_string_itos = _itos(in);
	for (a = 0; p_string_itos[a]; a++)
	{
		_putchar(p_string_itos[a]);
		*c = *c + 1;
	}
*i = *i + 1;
}
