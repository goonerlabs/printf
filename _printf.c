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
	void *ptr;
	int (*f)(int i, ...);
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
		if (format[i + 1] == '%')
		{
			result += _putchar('%');
			i += 2;
			continue;
		}

		f = get_func(format[i + 1]);
		if (format[i + 1] == 'c')
			ptr =  va_arg(args, int);
		if (format[i + 1] == 's')
			ptr = va_arg(args, char *);
		result += f(1, *ptr);
		i += 2;
	}
	va_end(args);
	return (result);
}
