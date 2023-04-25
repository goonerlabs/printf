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

/**
 * struct type_func_map - struct data type to map a function
 * @type: data type
 * @func: corresponding function to the data type
 */
typedef struct type_func_map
{
	int type;
	int (*func)(int n, ...);
} map;

map get_func(char specifier);
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(int i, ...);
int print_char(int i, ...);

#endif /* MAIN_H */
