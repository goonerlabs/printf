#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
 * print_octal - function that prints the octal value of an unsigned integer
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
	val = va_arg(args, long int);
	index = 0;

	if (val < 0)
		return (-1);
	if (val == 0)
	{
		_putchar(0 + '0');
		return (-1);
	}
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

/**
 * print_hex - function that prints the hexadecimal
 *		value of an unsigned integer
 * @i: first parameter
 * @...: second parameter
 * Return: count
 */

int print_hex(int i, ...)
{
	va_list args;
	long int val;
	char *hex_str;
	int index = 0, res, len, count = 0;
	char result[1024];

	va_start(args, i);
	val = va_arg(args, long int);
	hex_str = "0123456789abcdef";

	if (val < 0)
		return (-1);
	if (val == 0)
	{
		_putchar(0 + '0');
		return (-1);
	}
	while (val != 0)
	{
		res = val % 16;
		result[index] = hex_str[res];
		index++;
		val = val / 16;
	}
	len = 0;
	while (result[len] != '\0')
	{
		count += _putchar(result[len]);
		len++;
	}

	va_end(args);

	return (count);
}

/**
 * print_hex_cap - function that prints the hexadecimal
 *		value of an unsigned integer
 * @i: first parameter
 * @...: second parameter
 * Return: count
 */

int print_hex_cap(int i, ...)
{
	va_list args;
	long int val;
	char *hex_str;
	int index = 0, res, len, count = 0;
	char result[1024];

	va_start(args, i);
	val = va_arg(args, long int);
	hex_str = "0123456789ABCDEF";

	if (val < 0)
		return (-1);
	if (val == 0)
	{
		_putchar(0 + '0');
		return (-1);
	}
	while (val != 0)
	{
		res = val % 16;
		result[index] = hex_str[res];
		index++;
		val = val / 16;
	}
	len = 0;
	while (result[len] != '\0')
	{
		count += _putchar(result[len]);
		len++;
	}
	va_end(args);
	return (count);
}
