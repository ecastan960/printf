#include "holberton.h"
/**
 * f_c - prints one character
 * @arg_char: agrs of the list
 * Return: cero
 */
int f_c(va_list arg_char)
{
	char ch = ((char) va_arg(arg_char, int));

	return (_putchar(ch));
}
