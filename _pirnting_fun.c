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
char x;
va_arg(args, int);
x = '%';
return (write(1, &x, 1));
}
/**
 * print_string - print string variable
 * @args: the ist of arguments
 * Return: 1 for success
*/
int print_string(va_list args)
{
char *str = va_arg(args, char *);
write(1, str, _strlen(str));
return (_strlen(str));
}
