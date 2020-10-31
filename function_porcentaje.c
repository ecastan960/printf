#include "holberton.h"
/**
 * f_percentage - prints one character at a time
 *
 * @arg_percentege: char to print
 * Return: cero
 */
int f_percentage(__attribute__((unused)) va_list arg_percentege)
{
	int contador_p = 0;

	contador_p = contador_p + _putchar('%');
	return (contador_p);
}
