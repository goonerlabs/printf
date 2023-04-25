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
	map func_and_type;

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

		func_and_type = get_func(format[i + 1]);
		if (func_and_type.type == 0)
		{
			result += print_char(1, va_arg(args, int));
			i += 2;
		}
		if (func_and_type.type == 1)
		{
			result += print_string(1, va_arg(args, char *));
			i += 2;
		}
		if (format[i + 1] == '%')
		{
			result += _putchar('%');
			i += 2;
		}
		else
			break;
		/*
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
		}*/
	}
	va_end(args);
	return (result);
}
