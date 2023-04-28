#include "main.h"

/**
 * print_rot13 - prints a string using rot13
 * @n: the number of arguments
 * @...: string to print
 * Return: encoded string
 */

int print_rot13(int n, ...)
{
	unsigned int i, j;
	int count;
	char *s;
	va_list args;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	va_start(args, n);
	s = va_arg(args, char *);
	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				count += _putchar(b[j]);
				break;
			}
		}
		if (!a[j])
			count += _putchar(s[i]);
	}
	return (count);
}

