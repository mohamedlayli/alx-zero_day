#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/* This is Custom printf function */
int _printf(const char *format, ...);

/* This is Custom putchar function */
int _putchar(char c);

/* This is for print string */
int print_string(char *);

/* This is for print decimal */
int print_decimal(int value);

/* This is for power function */
long long int power(int base, int x);

/* This is for converting number to decimal */
long long convertToDecimal(int num, int base);

/* This is for print binary */
int print_binary(int num);

/* This is for unsigned integer */
int print_unsigned(unsigned int num);

#endif /* MAIN_H */
