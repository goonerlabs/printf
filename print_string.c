#include "main.h"
<<<<<<< HEAD
#include <stdarg.h>
=======
>>>>>>> master

/**
 * print_string - prints a string to stdout
 * @str: string to print
 * Return: number of characters printed
 */

<<<<<<< HEAD
int print_string(int i, ...)
{
	int index;
	va_list args;
	char *str;
	va_start(args, i);

	str = va_arg(args, char *);
	index = 0;
	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
	va_end(args);
	return (index);
=======
int print_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
>>>>>>> master
}
