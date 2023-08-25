#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * print_int_num - print int variables
 * @args: the ist of arguments
 * Return: int lenght + terminator + sign
*/
int print_int_num(va_list args)
{
int i;
int bytes_written;
int n = va_arg(args, int);
int count = 0;
int temp = n;
char buff[12];
if (temp == 0)
{
count = 1;
}
else if (temp < 0)
{
count++;
temp = -temp;
}
while (temp != 0)
{
temp /= 10;
count++;
}
i = count - 1;
if (n == 0)
{
buff[0] = '0';
i = 0;
}
else if (n < 0)
{
buff[0] = '-';
n = -n;
}
while (n != 0)
{
buff[i] = '0' + (n % 10);
n /= 10;
i--;
}
bytes_written = write(1, buff, count);
return (bytes_written);
}

