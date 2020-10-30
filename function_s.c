#include "holberton.h"
/**
 * putstring - prints a string
 * @str: pointer to string to print
 * @c: count the string size
 * @i: moves the main string counter one position
 */
int f_s(va_list arg_string)
{
	int a, contador_fs = 0;
	char *string;
	string = va_arg(arg_string, char *);
	
	for (a = 0; string[a]; a++)
	{
		contador_fs = contador_fs + _putchar(string[a]);
	}
return(contador_fs);	
}