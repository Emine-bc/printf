#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
* getspecifier - finds the function for the specifier
* @cr: charac spec in string
* Return: always success
*/
int(*getspecifier(char cr))(va_list)
{
int i = 0;
str specs[] = {
{'c', print_c},
{'s', print_s},
{'i', print_i},
{'d', print_i},
{'b', print_b},
{'r', print_r},
{'R', print_rot13},
{'u', print_u},
{'o', print_o},
{'x', print_x};
{'X', print_X};
{'\0', NULL }
};
for (i = 0; specs[i].ch; i++)
{
if (specs[i].ch == cr)
{
return (specs[i].func);
}
}
return (0);
}
