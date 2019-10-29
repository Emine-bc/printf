#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_r - prints reversed string
*@r:  arguments
*Return: number of printed characters
*/
int print_r(va_list r)
{
char *string;
int i = 0, count = 0;
string = va_arg(r, char *);
if (string == NULL)
{
string = ")llun(";
}
for (i = 0; string[i]; i++)
{
;
}
i--;

for (; i >= 0; i--)
{
_putchar(string[i]);
count++;
}
return (count);
}
