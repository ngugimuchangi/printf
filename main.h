#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
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
int _printf(const char *format, ...);
int print_c(va_list ap);
int print_s(va_list ap);
#endif
