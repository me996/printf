#include "main.h"

/*
 * @format: format.
 * _putchar - print a single character
 * Return: Printed chars.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/*
 * handle_string - A function that takes pointer to a character as parameter
 */
int handle_string(char *str)
{
int i = 0;
if (str == NULL)
{
handle_string("(NULL)");
return (i);
}
while (str[i])
{
putchar(str[i]);
i++;
}
return (i);
}
/*
 * _printf - print a function
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
if (!format || !format[0])
return (-1);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
char c = va_arg(args, int);
count += _putchar (c);
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
count += handle_string(str);
}
else if (*format == '%')
{
_putchar('%');
count++;
}
else
{
_putchar (*format);
count++;
}
format++;
}
else
{
_putchar(*format);
format++;
count++;
}
}
return (count);
}
