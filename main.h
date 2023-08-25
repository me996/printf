#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


#define buffer 1024
/* struct to assign pointer functions */

/**
 * struct printers - list of character and pointers
 * @s: character member
 * @f: pointer to function
*/

typedef struct printers
{
char s;
int (*f)(va_list);
} prn;

int _printf(const char *format, ...);

/* utilities functions */
int _putchar(char letter);
int _strlen(char *str);
int in_range(char c);

/* printing different specifiers */
int print_int_num(va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

/* pointer to functions */
int(*get_print_func(char ch))(va_list);


#endif
