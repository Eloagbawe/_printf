#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>

void _putchar(int c);
int _printf(const char *format, ...);
int _strlen(const char *str);
int _printstr(const char * s);
int _printnum(long int num, int* i);
int _printnumbase(long int num, int* i, int base);
int _printhexa(long int num, int* i);
int _printHexa(long int num, int* i);
int _printnull(void);
int _printzero(void);
int _handle_c(int character);
int _handle_s(char* str);
int _handle_d(int num);
int _handle_i(int num);
int _handle_b(int num);
int _handle_u(int num);
int _handle_o(int num);
int _handle_x(int num);
int _handle_X(int num);
int handle_int_specifiers(int arg, char specifier);
int check_non_printable(int c);
int _printStr(const char *s);
int _handle_S(char* string);
#endif
