#include "main.h"
/**
 * print_char- prints a single character
 * @i: then number of characters to be printed
 * @...: then the character to be printed
 * Return: the number of characters printed
 *
 */

int print_char(int i, ...)
{
	va_list args;
	char c;
	int ar;

	va_start(args, i);
	c = va_arg(args, int);
	ar = _putchar(c);

	return (ar);
}
