#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#define BUFF_BYTE 1024

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
int print_number_uint(unsigned int n, int *count);
int print_binary(int i, ...);
int print_octal(int i, ...);
int print_hex(int i, ...);
int print_hex_cap(int i, ...);
int print_reverse(int n, ...);
int print_rot13(int n, ...);
int print_address(int n, ...);
int print_uint(int n, ...);

#endif /* MAIN_H */
