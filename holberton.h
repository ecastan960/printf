#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
typedef struct sp_format
{
      char *sp_char;
      int (*p_fun)(va_list);
}sp_format;

int (*search_function(char sf_char))(va_list arg_list);

char *_itos(int a);
int _putchar(char ch);
int f_c(va_list arg_char);
int f_s(va_list arg_string);
int f_i(va_list arg_integer);

int _printf(const char *format, ...);

#endif
