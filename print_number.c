#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer value
 * @count: second argument
 * Return: total number of n
 */

int print_number(int n, int *count)
{
	int num = n;

	if (n < 0)
	{
		*count += _putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10, count);

	*count += _putchar((num % 10) + '0');

	return (*count);
}
