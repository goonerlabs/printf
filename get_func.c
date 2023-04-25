#include "main.h"

/**
 * get_func - a function that iterates through an array of functions
 * @s: character
 * Return: a pointer to the function
 */

int (*get_func(char s))(int i, ...)
{
	int i;
	func_t arr[] = {
		{print_char, 'c'},
		{print_string, 's'},
		{print_digit, 'd'},
		{print_digit, 'i'},
		{NULL, '\0'}
	};

	i = 0;
	while (arr[i].specifier)
	{
		if (arr[i].specifier == s)
		{
			return (arr[i].func);
		}

		i++;
	}
	return (NULL);
}
