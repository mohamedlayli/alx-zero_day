#include "main"

/**
 * prt_dec - This function prints a decimal number
 * @val: The value of decimal number need to be print
 *
 * Return: The number of printed characters
 */
 int prt_dec(int val)
 {
     int counter = 0;

     /* print - for negative numbers */
     if (val < 0)
     {
         counter += _putchar('-');
         val = val * -1;
     }

	/* First remove the last digit of the number and print
	 * the remaining digits using recursion, then print
	 * the last digit
	 */
	if (val / 10)
		count += print_decimal(val / 10);

	count += _putchar(val % 10 + '0');

	return (counter);
}

