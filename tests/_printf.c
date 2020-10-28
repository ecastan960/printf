#include "holberton.h"
/**
 * _printf - function that writes the characters on terminal
 *
 * @format: Array to use
 * Description: prints on terminal
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i, n = 0, c = 1, r = 0, in = 0;
	char str, *s, *string;
	va_list print;

	while (format[n])
		n++;
	va_start(print, format);
	for (i = 0; i < n; i++)
	{
		if (format[i] != '%')
			r = 0, c = 1, write(1, &format[i], 1);
		else
		{
			while (format[i + c] != '\0' && r == 0)
			{
				switch (format[i + c])
				{
				case 'c':
					str = va_arg(print, int);
					s = &str, write(1, s, 1), i = i + c, r = 1;
					break;
				case 's':
					string = va_arg(print, char*), i = i + c, r = 1;
					_prints(string);
					break;
				case '%':
					str = '%', s = &str, write(1, s, 1), i = i + c, r = 1;
					break;
				case 'i':
					in = va_arg(print, int), string = _itos(in), i = i + c, r = 1;
					_prints(string);
					break;
				case 'd':
					in = va_arg(print, int), string = _itos(in), i = i + c, r = 1;
					_prints(string);
					break;
				default:
					c++;
					break;
				}
			}
		}
	}
	va_end(print);
	return (0);
}
