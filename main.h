#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _putint(int n);
/**
 * struct spec - A new struct type holding specifier and its conversion printer
 * @sp: conversion specifier
 * @f: function pointer to function that prints the relevant data type
 */
typedef struct spec
{
	char *sp;
	int (*f)(va_list);
} spec_t;
int _vprintf(spec_t op[], const char *format, va_list aps);
int _printf(const char *format, ...);
int print_c(va_list ap);
int print_s(va_list ap);
int print_i(va_list ap);
int print_b(va_list ap);
int print_b2(unsigned int n, int counter);
int print_ui(va_list ap);
int print_oct(va_list ap);
int print_hex(va_list ap);
int print_Hex(va_list ap);

#endif
