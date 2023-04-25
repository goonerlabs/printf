#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct func_type - struct data type to map a function
 * @specifier: specifier
 * @func: corresponding function to the specifier
 */
typedef struct func_type
{
	int (*func)(int i, ...);
	char specifier;
} func_t;

int (*get_func(char s))(int i, ...);
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(int i, ...);
int print_char(int i, ...);
int print_digit(int i, ...);
int print_number(int n, int *count);

#endif /* MAIN_H */
