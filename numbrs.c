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
/**
  * print_rb - help print int in binary
  * @a: int
  * @d: int
  * @c: int
  * Return: Always succes
  */

int print_rec_b(int a, int d, int c)
{
if (a >= 1)
{
	c++;
	print_rec_b(a / d, d, c);
	_putchar((a % d) + '0');
}
return (c);
}

/**
  * print_b - print int in binary
  * @bin: list
  * Return: Always success
  */

int print_binary(va_list bin)
{
	int a = va_arg(bin, int);
	int d = 2, c = 0;
	
	if (a == 0)
	{
		_putchar(0 + '0');
		c++;
	}
	else if (a == 1)
	{
		_putchar(1 + '0');
		c++;
	}
	else
	{
	c = print_rec_b(a, d, c);
	}
	return (c);
}
