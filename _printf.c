#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
* _printf -print anything
*@format: list of arguments types passed  to stdout
*Return: number of charracters printed
**/
int _printf(const char *format, ...)
{
unsigned int i = 0;
unsigned int count = 0;
int (*f)(va_list);
va_list lists;
if (format == NULL)
return (-1);
va_start(lists, format);
while (format && format[i])
{
if (format[i] != '%')
{
_putchar(format[i]);
count++;
}
else if (format[i] == '\0')
return (count);
else if (format[i] == '%' && format[i + 1] == '\0')
return (-1);
else if (format[i] == '%')
{
f = getspecifier(format[i + 1]);
i += 1;
if (f == NULL)
{
if (format[i] != '%')
{
_putchar(format[i - 1]);
count += 1;
}
_putchar(format[i]);
count += 1;
}
else
count = count + f(lists);
}
i++;
}
va_end(lists);
return (count);
}
