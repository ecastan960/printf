#include "holberton.h"
/**
 * _tam - calculate the size of a string
 * @s: pointer to string  
 * Return: size of a string
 */
int _tam(char *s)
{ int tam= 0;
  while (s[tam])
  {
    tam++;
  }
  return (tam);
}
/**
 * _pstr - print a string
 * @s: pointer to string to print
 */
void _pstr(char *s)
{
  int n = _tam(s);
  for (int i = 0; i < n; i++)
      {
        _putchar(s[i]);
      }
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}