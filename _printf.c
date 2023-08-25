#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints any string with variables
 * @format: the string to be printed
 * Return: 1 for success and -1 when fail
*/
int _printf(const char *format, ...)
{
int i, written, counter;
va_list args;
va_start(args, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
counter = 0;
written = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%' && in_range(format[i + 1]))
{
written = get_print_func(format[++i])(args);
}
else
{
_putchar(format[i]);
counter++;
}
}
va_end(args);
return (counter + written);
}
