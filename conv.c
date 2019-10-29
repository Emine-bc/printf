#include "holberton.h"
/**
 * cnv - print int  in binary form
 * @a: int to print
 * @b: result
 * @len: numbr of digits to be printed
 * Return: Always success
 */
int cnv(unsigned int a, int b, int len)
{
if (!a)
return (len);
else if (b == 16)
{
if (a % b >= 10)
{
len = cnv(a / b, b, len + 1);
_putchar(a % b + 'A' - 10);
return (len);
}
else
{
len = cnv(a / b, b, len + 1);
_putchar(a % b + '0');
return (len);
}
}
else
{
len = cnv(a / b, b, len + 1);
_putchar(a % b + '0');
return (len);
}
}
