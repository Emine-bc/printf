#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
/**
* struct str - structure for printing various types
* @ch: type specifier to print 
* @func: print argument
*/
typedef struct str
{
char ch;
int (*func)(va_list);
} str;

int _putchar(char c);
int(*getspecifier(char))(va_list);
int print_c(va_list c);
int print_s(va_list s);
#endif
