#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
 * print_octal - function that prints the octal value of an integer
 * @i: first parameter
 * @...: second parameter
 * Return: count
 */

int print_octal(int i, ...)
{
	va_list args;
	long int val;
	int index, len, count = 0;
	int result[1024];

	va_start(args, i);
	val = va_arg(args, int);
	index = 0;

	if (val < 0)
		return (-1);
	while (val != 0)
	{
		result[index] = val % 8;
		index++;
		val = val / 8;
	}

	for (len = (index - 1); len >= 0; len--)
		count += _putchar(result[len] + '0');
	va_end(args);

	return (count);
}
