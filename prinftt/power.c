#include "main.h"

/**
 * power - This function is to calculate the power of base raised to an exponent
 * @base: This represent the base
 * @xp: This represent the exponent
 *
 * Return: The result of power calculation
 */
 long long int power(int base, int xp)
 {
     int the_result = 1;

     for (; xp > 0; xp--)
     {
         the_result = the_result * base;
     }

     return (the_result);
 }

