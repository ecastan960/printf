#include "pholberton.h"
/**
 * _printf - prints a cadena with format
 * @format: string principal
 * @...: argumentos variadicos
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i, c = 0;

	va_list print;

	va_start(print, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			c++;
		}
		else
		{
			search_function(format[i + 1])(print);
			i++;
		}
	/*necesito adicionar los contadores i, c cuando se ejecuten las funciones*/	
	}
	va_end(print);
	return (c);
}
