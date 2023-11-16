#include "main.h"

#include <unistd.h>

/**
 * _putchar - Write single character to stdout
 * @ch: Character to be write
 *
 * Return: when success, return the number of characters written.
 * On error, returns (-1)
 */
 int _putchar(char ch)
 {
     return (write(1, &ch, 1));
 }

