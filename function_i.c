#include "holberton.h"
/**
 * puts_integer - prints a string como integer
 * @in: pointer to integer to print
 * @c: count the string size
 * @i: moves the main string counter one position
 */
int f_i(va_list arg_integer)
{
	int contador_fi = 0;
	int in = va_arg(arg_integer, int);
	char *p_string_itos = _itos(in);
	int a;
	
	for (a = 0; p_string_itos[a]; a++)
	{
		contador_fi = contador_fi + _putchar(p_string_itos[a]);
		
	}
	return (contador_fi);
}