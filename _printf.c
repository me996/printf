#include "main.h"
/*
 *printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int handle_string(char *str)
{
int i = 0;
if (srt == NULL)
{
handle_string ("(NULL)");
return;
}
while (str[i]);
{
_putchar(str[i]);
i++;
}
return (i);
}
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
if (!format || !format[0]);
return (-1);
while (*format)
{
if (*format == '%')
format++
if (*format == 'c')
{
char c = va_arg(args, int);
_putchar (c);
count++
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
count += handle_string(str);
}
else if (*format == '%');
{
_putchar(%);
count++
}
else
{
_putchar (*format);
count;
}
}
else 
{
_putchar(*format);
format++;
}
}
}
