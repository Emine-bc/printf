#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
*print_b - conv number to bin
*@b: input
*Return: The amounts of digits printed
*/
int print_b(va_list b)
{
unsigned int num, count = 0, i = 0;
int t[100];
num = va_arg(b, int);
if (num < 2)
{
_putchar(num + '0');
count = 1;
}
else if (num >= 2)
{
while (num > 0)
{
t[i] = num % 2;
num /= 2;
i++;
}
}
while (i--)
{
_putchar(t[i] + '0');
count++;
}
return (count);
}
