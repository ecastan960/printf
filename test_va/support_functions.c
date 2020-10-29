#include "pholberton.h"
#include <stdio.h>
/**
 * _putchar - prints one character at a time
 * @c: char to print
 * Return: cero
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
/**
 * f_c - prints one character
 * @arg_char: agrs of the list
 * Return: cero
 */
void f_c(va_list arg_char)
{
	printf("estoy dentro de f_c\n");
	printf("________________________\n");
	char ch = ((char) va_arg(arg_char, int));
	_putchar(ch);
	/*return (0)*/
}
/**
 * _putchar - prints one character at a time
 * @c: char to print
 * Return: cero
 */
/*void f_percentage(va_list arg_percentege)
{
	printf("estoy dentro de f_percentage\n");
	printf("________________________\n");
	/*_putchar(arg_percentege);
	return (0);
}*/

/**
 * putstring - prints a string
 * @str: pointer to string to print
 * @c: count the string size
 * @i: moves the main string counter one position
 */
void f_s(va_list arg_string)
{
	int a;
	char *string;
	string = va_arg(arg_string, char *);
	
	for (a = 0; string[a]; a++)
	{
		_putchar(string[a]);
		//*c = *c + 1;
	}
	//*i = *i + 1;*/
}
/**
 * puts_integer - prints a string como integer
 * @in: pointer to integer to print
 * @c: count the string size
 * @i: moves the main string counter one position
 */
void f_i(va_list arg_integer)
{
	
	int in = va_arg(arg_integer, int);
	char *p_string_itos = _itos(in);
	int a;
	
	for (a = 0; p_string_itos[a]; a++)
	{
		_putchar(p_string_itos[a]);
		
	}

}
