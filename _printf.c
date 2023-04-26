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
	int (*f)(int i, ...);
	va_list args;

	va_start(args, format);
	i = 0,	result = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			result += _putchar(format[i]);
			i++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			result += _putchar('%');
			i += 2;
			continue;
		}

		f = get_func(format[i + 1]);
		if (f == NULL)
			return (-1);
		if (format[i + 1] == 'c' || format[i + 1] == 'd' || format[i + 1] == 'i' ||
				format[i + 1] == 'b' ||	format[i + 1] == 'o' || format[i + 1] == 'u')
		{
			result += f(1, va_arg(args, int));
			i += 2;
			continue;
		}
		if (format[i + 1] == 's' || format[i + 1] == 'r' || format[i + 1] == 'R')
		{
			result += f(1, va_arg(args, char *));
			i += 2;
			continue;
		}
	}
	va_end(args);
	return (result);
}
