#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_int_num - print int variables
 * @args: the ist of arguments
 * Return: int lenght + terminator + sign
*/
int print_int_num(va_list args)
{
char *sn;
int isneg, i, sdno, dno, tmp;
int n = va_arg(args, int);
isneg = n < 0 ? 1 : 0;
tmp = n < 0 ? -n : n;
dno = 0;
sdno = 0;
while (tmp > 0)
{
tmp = tmp / 10;
dno++;
}
if (isneg)
sdno = dno + 2;
else
sdno = dno + 1;
sn = malloc(sizeof(char) * sdno);
if (isneg)
{
sn[0] = '-';
tmp = -n;
}
else
tmp = n;
i = sdno - 1;
while (tmp > 0)
{        /* 123 % 10 = 3 */
sn[--i] = tmp % 10 + '0';
tmp = tmp / 10;
}
 write(1, sn, sdno - 1);
return (sdno - 1);
}
