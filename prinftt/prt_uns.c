#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @val: The unsigned integer to print
 *
 * Return: The number of printed characters
 */
int prt_uns(unsigned int value)
{
	int counter = 0;

	/* First remove the last digit of the number and print
	 * the remaining digits using recursion, then print
	 * the last digit
	 */
	if (val / 10)
		count += prt_dec(val / 10);

	count += _putchar(val % 10 + '0');

	return (counter);
}

