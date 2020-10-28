#include "holberton.h"
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
			switch (format[i + 1])
			{
			case 'c':
				_putchar((char) va_arg(print, int)), c++, i++;
				break;
			case 's':
				putstring(va_arg(print, char *), &c, &i);
				break;
			case '%':
				_putchar('%'), c++, i++;
				break;
			case 'i':
				puts_integer(va_arg(print, int), &c, &i);
				break;
			case 'd':
				puts_integer(va_arg(print, int), &c, &i);
				break;
			default:
			_putchar('%'), c++;
			break;
			}
		}
	}
	va_end(print);
	return (c);
}
