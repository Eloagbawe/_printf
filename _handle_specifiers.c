#include "_printf.h"
#include <stdio.h>

/**
 * handle_int_specifiers - handles int specifiers
 * @arg: number or char to print
 * @specifier: indicated specifier
 * Return: num of characters printed
*/

int handle_int_specifiers(int arg, char specifier) {
  switch (specifier) {
    case ('c'):
      return _handle_c(arg);
      break;
    case ('d'):
      return _handle_d(arg);
      break;
    case ('i'):
      return _handle_i(arg);
      break;
    case ('b'):
     return _handle_b(arg);
      break;
    case ('u'):
     return _handle_u(arg);
      break;
    case ('o'):
      return _handle_o(arg);
      break;
    case ('x'):
      return _handle_x(arg);
      break;
    case ('X'):
      return _handle_X(arg);
      break;
    default:
      return (0);
      break;
  }
}

/**
 * handle_char_specifiers - handles int specifiers
 * @str: string to print
 * @specifier: indicated specifier
 * Return: num of characters printed
*/

int handle_char_specifiers(char* str, char specifier) {
  switch (specifier) {
    case ('s'):
      return _handle_s(str);
      break;
    case ('S'):
      return _handle_S(str);
      break;
    default:
      return (0);
      break;
  }
}

/**
 * handle_long_int_specifiers - handles int specifiers
 * @num: num to print
 * @specifier: indicated specifier
 * Return: num of characters printed
*/

int handle_long_int_specifiers(unsigned long int num, char specifier) {
  switch (specifier) {
    case ('p'):
      return _handle_p(num);
      break;
    default:
      return (0);
      break;
  }
}
