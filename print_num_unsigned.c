#include "main.h"

/**
 * print_number_uint - function that prints an unsigned integer.
 * @n: integer value
 * @count: second argument
 * Return: total number of n
 */

int print_number_uint(unsigned int n, int *count)
{

	if ((n / 10) > 0)
		print_number_uint(n / 10, count);

	*count += _putchar((n % 10) + '0');

	return (*count);
}
