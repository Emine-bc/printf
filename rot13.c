#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_rot13 - prints the rot13'ed string
*@R:  list
*Return: always success
*/
int print_rot13(va_list R)
{
char *s = va_arg(R, char *);
int i, j, count = 0;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while ((a[j] != '\0') && (s[i] != a[j]))
{
j++;
}
if (s[i] == a[j])
{
_putchar(rot[j]);
count++;
}
else if (a[j] == '\0')
{
_putchar(s[i]);
count++;
}
}
return (count);
}
