#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * get_print_func - pointer to function
 * @ch: the variable to be printed
 * Return: pointer to function
*/

int(*get_print_func(char ch))(va_list)
{
prn arr[] = {
{'c', print_char},
{'s', print_string},
{'%', print_percent},
{'i', print_int_num},
{'d', print_int_num}
};
int i;
i = 0;
while (i < 5)
{
if (ch && ch == arr[i].s)
return (arr[i].f);
i++;
}
return (NULL);
}

