#include "holberton.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format,...)
{
        int i, n = 0, c = 1, r = 0, a = 0, in;
        int *string_s;
        char str;
        char *s, *string;
        va_list print;
        while (format[n])
        {
                n++;  
        }
        va_start(print,format);
        for (i = 0; i < n; i++)
        {
                if (format[i] != '%')
                {       
                        r = 0;
                        c = 1;
                        a = 0;
                        write(1, &format[i],1);
                }
                else
                {

                        while(format[i+c] != '\0' && r == 0)
                        {
                                switch (format[i + c])
                                {
                                        case 'c':
                                                str = va_arg(print, int);
                                                s = &str;
                                                write(1, s, 1);
                                                i = i + c;
                                                r = 1;
                                                break;
                                        case 's':
                                                string_s = va_arg(print, int*);
                                                while (string_s[a])
                                                {
                                                write(1, &string_s[a], 1);
                                                a++;
                                                }
                                                i = i + c;
                                                r = 1;
                                                break;
                                        case '%':
                                                str = '%';
                                                s = &str;
                                                write(1, s, 1);
                                                i = i + c;
                                                r = 1;
                                                break;
                                        case 'i':
                                                in = va_arg(print, int);
                                                string = _itos(2345);

                                                while (string[a])
                                                {
                                                write(1, &string[a], 1);
                                                a++;
                                                }
                                                i = i + c;
                                                r = 1;
                                                break;

                                        default:
                                                c++;
                                                break;
                                }
                        }

                }
        }
        va_end(print);
}
