#include "main.h"
/**
 * write_char - Writes a character to standard output.
 * @c: The character to write.
 * Return: Number of characters written.
 */
int write_char(int c)
{
return (write(1, &c, 1));
}
/**
 * write_string - Writes a string to standard output.
 * @s: The string to write.
 * Return: Number of characters written.
 */
int write_string(const char *s)
{
int count = 0;
while (*s != '\0')
{
count += write_char(*s);
s++;
}
return (count);
}
/**
 * _printf - Prints formatted output.
 * @format: The format string.
 * Return: Number of characters printed.
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
case 'c':
{
int c = va_arg(args, int);
count += write_char(c);
break;
}
case 's':
{
char *s = va_arg(args, char *);
count += write_string(s);
break;
}
case '%':
{
count += write_char('%');
break;
}
default:
{
count += write_char(*format);
break;
}
}
}
else
{
count += write_char(*format);
}
format++;
}
va_end(args);
return (count);
}
