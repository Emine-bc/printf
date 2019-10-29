#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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
<<<<<<< HEAD
{'b', print_b};
=======
>>>>>>> e81eeee53cb514b5e7244db7d2bd5c0fc35434c3
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
