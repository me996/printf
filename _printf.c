#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints any string with variables
 * @format: the string to be printed
 * Return: 1 for success and -1 when fail
*/
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c': {
int c = va_arg(args, int);
count += write(1, &c, 1);
break;
}
case 's':
{
char *s = va_arg(args, char *);
while (*s != '\0')
{
s += write(1, s, 1);
count++;
}
break;
}
case '%':
{
count += write(1, "%", 1);
break;
}
default:
{
count += write(1, format, 1);
break;
}
}
}
else
{
count += write(1, format, 1);
}
format++;
}
va_end(args);
return (count);
}
