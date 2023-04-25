#include "main.h"
/**
 * print_char-
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
