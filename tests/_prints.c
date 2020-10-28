#include "holberton.h"
/**
 * _prints - prints characters of a string
 *
 * @string: string to print
 * Description: prints on terminal characters of a string
 * Return: 0
 */
void _prints(char *string)
{
	int a = 0;

	while (string[a])
	{
		write(1, &string[a], 1), a++;
	}
}
