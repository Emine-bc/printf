#include <stdarg.h>
#include "holberton.h"
/**
* print_i - print  integer i
* @id: name list
*
* Return: Always success
*/
int print_i(va_list id)
{
int n;
int div;
int len;
unsigned int num;
n  = va_arg(id, int);
div = 1;
len = 0;
if (n < 0)
{
len += _putchar('-');
num = n * -1;
}
else
num = n;
for (; num / div > 9; )
div *= 10;
for (; div != 0; )
{
len += _putchar('0' + num / div);
num %= div;
div /= 10;
}
return (len);
}
