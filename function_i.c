#include "holberton.h"
/**
 * f_i - prints a string as integer
 *
 * @arg_integer: number to print
 *
 * Return: contador_fi
 */
int f_i(va_list arg_integer)
{
	int contador_fi = 0;
	int in = (int) va_arg(arg_integer, int);
	char *p_string_itos;

	p_string_itos = itos(in);
	int a;

	for (a = 0; p_string_itos[a]; a++)
	{
		contador_fi = contador_fi + _putchar(p_string_itos[a]);

	}
	return (contador_fi);
}
