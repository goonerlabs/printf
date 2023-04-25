#include "main.h"

/**
 * get_func - a function that iterates through an array of functions
 * @specifier: given formatter
 * Return: a struct data type
 */

map get_func(char specifier)
{
	int i;
	map result;
	func_t array[] = {
		{'c', print_char}, {'s', print_string}, {NULL, NULL}
	}

	i = 0;
	while (array[i].specifier)
	{
		if (array[i].specifier == specifier)
		{
			result.type = i;
			result.func = array[i].func
		}

		i++;
	}
	return result;
}
