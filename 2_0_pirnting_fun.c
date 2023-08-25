#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - print char variables
 * @args: the ist of arguments
 * Return: 1 for success
*/
int print_char(va_list args)
{
char c = va_arg(args, int);
return (_putchar(c));
}

/**
 * print_percent - print precent character
 * @args: the ist of arguments
 * Return: 1 for success
*/
int print_percent(va_list args)
{
va_arg(args, int);
return (write(1, "%", 1));
}

/**
 * print_string - print string variable
 * @args: the ist of arguments
 * Return: length of string
*/
int print_string(va_list args)
{
int written = 0;
char *str = va_arg(args, char *);
while (*str != '\0')
{
write(1, str, 1);
written++;
str++;
}
return (written);
}
