#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
/**
 * struct sp_format - Struct to handle functions and format
 *
 * @sp_char: receive character
 * @p_fun: The function associated
 */
typedef struct sp_format
{
	char *sp_char;
	int (*p_fun)(va_list);
} sp_format;
/**
 * struct sformat - selects a valid format
 *
 * @c1: next char
 */
typedef struct format
{
      char *c1;
}sel_format;


int (*search_function(char sf_char))(va_list arg_list);

char *itos(int a);
int _putchar(char ch);
int f_c(va_list arg_char);
int f_s(va_list arg_string);
int f_i(va_list arg_integer);
int f_percentage(va_list arg_percentege);
int *fop(char c);
int _printf(const char *format, ...);

#endif
