#include "holberton.h"
/**
 * _printf - prints a cadena with format
 * @format: string principal
 * @...: argumentos variadicos
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i, contador_general = 0;

	va_list print;

	va_start(print, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			contador_general++;
		}
		else
		{
			contador_general = contador_general + search_function(format[i + 1])(print);
			i++;
		}
	}
	va_end(print);
	return (contador_general);
}
