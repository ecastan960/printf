#include "holberton.h"
/**
 * _printf - prints a cadena with format
 * @format: string principal
 * @...: argumentos variadicos
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i, c_g = 0;
	int *c;

	va_list print;

	va_start(print, format);
	if (format != NULL)
	{
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			c_g++;
		}
		else
		{
			c = fop(format[i + 1]);
			if (c != NULL)
				c_g = c_g + search_function(format[i + 1])(print);
			i++;
		}
	}
	va_end(print);
	return (c_g);
	}
	return(0);
}
