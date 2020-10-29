#include "holberton.h"
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