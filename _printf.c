#include <stdarg.h>
#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	int count = 0, i = 0;

	va_list data;
	va_start(data, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			if (format[i + 1] == 'c')
			{
				count += _putchar(va_arg(data, int));
			}
			else if (format[i + 1] == 's')
			{
				count += print_string(va_arg(data, char *));
			}
			else if (format[i + 1] == '%')
			{
				count += _putchar('%');
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				count += print_decimal(va_arg(data, int));
			}
			else if (format[i + 1] == 'b')
			{
				count += print_binary(va_arg(data, int));
			}
			else if (format[i + 1] == 'u')
			{
				count += print_unsigned(va_arg(data, unsigned int));
			}

			i += 2;
		}
		else
		{
			i++;
		}
	}

	va_end(data);

	return count;
}
