#include "main.h"
#include <stdarg.h>

/**
 * print_string - prints a string to stdout
 * @str: string to print
 * Return: number of characters printed
 */

int print_string(int i, ...)
{
	int index;
	va_list str;
	char *c;
	va_start(str, i);

	c = va_arg(str, char *);
	index = 0;
	while (c[index])
	{
		_putchar(c[index]);
		index++;
	}
	va_end(str);
	return (index);
}
