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
}
