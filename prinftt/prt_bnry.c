#include "main.h"

/**
 * prt_bnry - This function prints the binary formated number decimal number
 * @num: The decimal number
 *
 * Return: The number of printed characters
 */
 int prt_bnry(int num)
 {
     int array[32];
     int i = 0;
     int counter =0;

     while(num >= 2)
     {
         array[i] = num % 2;
         num /= 2;
         i++;
     }
     array[i] = num;

     for (; i>= 0; i--)
     {
         counter += _putchar(array[i] + '0');
     }

     return (counter);
 }

