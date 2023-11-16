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
int prt_str(char *);

/* This is for print decimal */
int prt_dec(int value);

/* This is for power function */
long long int power(int base, int x);

/* This is for converting number to decimal */
long long con2dec(int num, int base);

/* This is for print binary */
int prt_bry(int num);

/* This is for unsigned integer */
int prt_uns(unsigned int num);

#endif /* MAIN_H */

