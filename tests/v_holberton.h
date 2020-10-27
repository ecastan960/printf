#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <unistd.h>
typedef struct format_specifier
{
        char specifier;
        void (*print_function)(va_list);
} t_format_specifier;

t_format_specifier v_format_specifier []{
        {"s", fu_string}
        {"c", fu_char}
}

int _printf(const char *format, ...)
int _tam(char *s);
void _pstr(char *s);
int _putchar(char c)
#endif
