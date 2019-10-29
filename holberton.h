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
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list id);
int print_b(va_list b);
int print_r(va_list r);
int print_rot13(va_list R);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
#endif
