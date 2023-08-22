#include "main.h"
/*
 * _printf - printf function
 * @format: is a character string
 * return: the number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);
int printed_chars = 0;
for (int i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
_putchar(va_arg(args, int));
printed_chars++;
break;
case 's':
const char *str = va_arg(args, const char *);
while (*str)
{
_putchar(*str);
str++;
printed_chars++;
}
break;
case '%':
_putchar('%');
printed_chars++;
break;
default:
break;
}
}
else
{
_putchar(format[i]);
printed_chars++;
}
}
va_end(args);
return (printed_chars);
}
int main(void)
{
_printf("Hello, %s! The character is %c.\n", "World", 'A');

return (0);
}

