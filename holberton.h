#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
/**
* struct str - structure for printing various types
*@ch: type specifier to print
*@func: print argument
*/
typedef struct str
{
char ch;
int (*func)(va_list);
} str;

int _putchar(char c);
int _printf(const char *format, ...);
int(*getspecifier(char))(va_list);
int cnv(unsigned int a, int b, int len);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list id);
int print_b(va_list b);
#endif
