#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 *print_c - prints  char
 *@c: char to print
 *Return: always success
 **/
int print_c(va_list c)
{
char ch = (char)va_arg(c, int);
_putchar(ch);
return (1);
}
/**
 * print_s - prints astring
 * @s: string to print
 * Return: number of characters  printed
 */
int print_s(va_list s)
{
	int i;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
