#include <string.h>
#include "main.h"
#include <stdio.h>

/*
 * _printf: This is Custom printf function
 * @format: This is the format string
 *
 * Return: This is the number of printed characters
 */
 
 int _printf(const char *format, ...)
 {
     int counter = 0;
     int i = 0;

     va_list the_data;
     va_start(the_data, format);

     while (format[i] != '\0')
     {
         if (format[i] != '%')
         {
             counter += _putchar(format[i]);
             i++;
         }
         else if (format[i] == '%' && format[i + 1] != ' ')
         {
             if (format[i + 1] == 'c')
             {
                 counter += _putchar(va_arg(the_data, char *));
             }
             else if (format[i + 1] == 's')
             {
                 counter += prt_str(va_arg(the_data, char *));
             }
             else if (format[i + 1] == '%')
             {
                 counter += _putchar('%');
             }
             else if (format[i + 1] == 'd' || format[i + 1] =='i')
             {
                 counter += prt_dec(va_arg(the_data, int));
             }
             else if (format[i + 1] == 'b')
             {
                 counter += prt_bnry(va_arg(the_data, int));
             }
             else if (formate[i+1] == 'u')
             {
                 counter += prt_uns(va_arg(the_data, unsigned int));
             }
             i += 2;
         }
         else
         {
             i++;
         }
     }

     va_end(the_data);

     return counter;
 }

