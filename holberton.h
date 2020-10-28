#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char ch);
void putstring(char *str, int *c, int *i);
int _printf(const char *format, ...);
char *_itos(int a);
void puts_integer(int in, int *c, int *i);

#endif
