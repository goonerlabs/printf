#include "main.h"

/**
 * print_reverse - prints a string in reverse
 * @n: number of arguments
 * @...: string to be printed
 *
 * Return: the number of characters printed
 */

int print_reverse(int n, ...)
{
	int i, count;
	char *s;
	va_list ap;

	va_start(ap, n);
	s = va_arg(ap, char*);
	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (i--; i >= 0; i--)
	{
		count += _putchar(s[i]);
	}

	va_end(ap);
	return (count);
}
