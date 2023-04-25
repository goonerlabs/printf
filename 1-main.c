#include "main.h"
#include <stdio.h>

/**
 * main - test code for task 1
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = _printf("Testing task %% of the _printf %s, and %c character\n", "function", '@');
	_printf("d = %d\n", i);
	_printf("i = %i\n", i);
	return (0);
}
