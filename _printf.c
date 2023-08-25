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
write(1, &c, 1);
count++;
break;
}
case 's':
{
char *s = va_arg(args, char *);
while (*s != '\0')
{
write(1, s, 1);
s++;
count++;
}
break;
}
case '%':
{
write(1, "%", 1);
count++;
break;
}
default:
{
write(1, format, 1);
count++;
break;
}
}
}
else
{
write(1, format, 1);
count++;
}
format++;
}
va_end(args);
return (count);
}

