#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer value
 * Return: total number of n
 */

int print_number(int n)
{
	unsigned int num = n;
	int count;

	count = 0;
	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
	count++;

	return (count);
}
