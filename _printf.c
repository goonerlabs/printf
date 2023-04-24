#include "main.h"

/**
 * _printf - prints a formatted string to stdout
 * @format: the string to print
 * @...: the arguments to print
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, result;
	va_list args;

	va_start(args, format);
	i = 0;
	result = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			result += _putchar(format[i]);
			i++;
			continue;
		}
		switch (format[i + 1])
		{
			case 'c':
				result += _putchar(va_arg(args, int));
				i += 2;
				break;
			case 's':
				result += print_string(va_arg(args, char *));
				i += 2;
				break;
			case '%':
				result += _putchar('%');
				i += 2;
				break;
		}
	}
	va_end(args);
	return (result);
}
