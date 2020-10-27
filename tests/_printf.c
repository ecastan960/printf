#include "holberton.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * _printf - function that writes the characters on terminal
 *
 * @format: Array to use
 * Description: prints on terminal
 * Return: 0
 */

int _printf(const char *format,...)
{
        /* n: number of characters in format.                                       */
        /* i: counter to evaluate each character in format                          */
        /* c: counter to next character after %                                     */
        /* r: flag to evaluate if a format character its found after %              */
        /* a: counter to access each character in strings to print in terminal      */
        /* str: stores a character  to print when %c is invoke                      */
        /* s: pointer to str needed to use write                                    */
        /* string: pointer to string store in va_arg                                */


        int i, n = 0, c = 1, r = 0, a = 0, in;
        char str;
        char *s, *string;
        /* stores the arguments  */
        va_list print;
        /* function to obtain the size of format */
        while (format[n])
        {
                n++;  
        }
        /* Macro to initialize print to be use with va_arg  */
        va_start(print,format);

        /* Loop to evaluate each caracter in format         */
        for (i = 0; i < n; i++)
        {
                /* evaluates if the current character its %, if not, print character */
                if (format[i] != '%')
                {       
                        r = 0;
                        c = 1;
                        a = 0;
                        /* function to print character */
                        write(1, &format[i],1);
                }

                else
                {
                        /* If character % its found, evaluate each following */
                        /* character if a format character its found or ignore */
                        /* otherwise */
                        while(format[i + c] != '\0' && r == 0)
                        {
                                /* switch function evaluates what   */
                                /* character format its found  */
                                switch (format[i + c])
                                {
                                        /* write one character argument */
                                        case 'c':
                                                str = va_arg(print, int);
                                                s = &str;
                                                write(1, s, 1);
                                                i = i + c;
                                                r = 1;
                                                break;

                                        /* write one string argument */
                                        case 's':
                                                string = va_arg(print, char*);
                                                while (string[a])
                                                {
                                                write(1, &string[a], 1);
                                                a++;
                                                }
                                                i = i + c;
                                                r = 1;
                                                break;
                                        /* write one % argument */   
                                        case '%':
                                                str = '%';
                                                s = &str;
                                                write(1, s, 1);
                                                i = i + c;
                                                r = 1;
                                                break;
                                        /* write one integer argument */
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
                                        /* look for next character */
                                        default:
                                                c++;
                                                break;
                                }
                        }

                }
        }
        /* finish macro */
        va_end(print);
}
