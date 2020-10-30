#include "holberton.h"
/**
 * _putchar - prints one character at a time
 * @c: char to print
 * Return: cero
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return(1);
}