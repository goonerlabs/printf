#include "main.h"

/**
 * print_address - prints the address of a variable
 * @n: number of arguments
 * @...: address to be printed
 * Return: void
 */

int print_address(int n, ...)
{
	unsigned long int num;
	va_list args;
	int count;

	va_start(args, n);
	num = va_arg(args, unsigned long int);

	_putchar('0');
	_putchar('x');
	count = 2;

	count += print_hex(1, num);

	return (count);
}
