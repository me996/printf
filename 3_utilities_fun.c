#include "main.h"
#include <unistd.h>

/**
 * _putchar - Utilizing the function to print character
 * @letter: the input character for printing
 * Return: 1 for getting result and -1 when failing
*/
int _putchar(char letter)
{
return (write(1, &letter, 1));
}

/**
 * _strlen - calculates string length
 * @str: the input string
 * Return: string length
*/
int _strlen(char *str)
{
int i;
if (!str)
return (0);
for (i = 0; str[i] != '\0'; i++)
;
return (i);
}
