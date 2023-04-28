#include "main.h"
#include <stdarg.h>

/**
 * print_binary - function that prints the base 2 value of an integer
 * @i: first parameter
 * @...: second parameter
 * Return: count
 */

int print_binary(int i, ...)
{
	va_list args;
	long int val;
	int index, len, count = 0;
	int result[32];

	va_start(args, i);
	val = va_arg(args, long int);
	index = 0;

	if (val < 0)
		return (-1);
	if (val == 0)
	{
		count += _putchar(0 + '0');
		return (-1);
	}
	while (val > 0)
	{
		result[index] = val % 2;
		index++;
		val = val / 2;
	}

	for (len = (index - 1); len >= 0; len--)
		count += _putchar(result[len] + '0');
	va_end(args);

	return (count);
}
