#include "main.h"

/**
 * print_uint - prints an unsigned int
 * @n: number of arguments
 * @...: number to be printed
 * Return: void
 */

int print_uint(int n, ...)
{
	va_list args;
	int count;
	unsigned int num;

	va_start(args, n);
	count = 0;

	num = va_arg(args, unsigned int);

	count = print_number_uint(num, &count);
	va_end(args);

	return (count);
}
