#include "main.h"

/**
 * print_digit - function that prints an integer.
 * @i: count
 * @...: arguments passed in
 * Return: count
 */

int print_digit(int i, ...)
{
	va_list args;
	int count;

	va_start(args, i);

	count = print_number(va_arg(args, int));
	va_end(args);

	return (count);
}
