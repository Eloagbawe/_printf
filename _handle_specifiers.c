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
 * _handle_c - handles the c specifier
 * @character: character to print
 * Return: num of characters printed
*/

int _handle_c(int character) {
  _putchar(character);
  return(1);
}

/**
 * _handle_s - handles the s specifier
 * @string: string to print
 * Return: num of characters printed
*/

int _handle_s(char* string) {
  if (string == NULL) {
    return _printnull();
  } else {
    return _printstr(string);
  }
}

/**
 * _handle_d - handles the d specifier
 * @num: number to print
 * Return: num of characters printed
*/

int _handle_d(int num) {
  if (num == 0) {
    return _printzero();
  } else {
    int count = 0, *count_ptr = NULL;
    count_ptr = &count;
    return _printnum(num, count_ptr);
  }
}


/**
 * _handle_i - handles the i specifier
 * @num: number to print
 * Return: num of characters printed
*/

int _handle_i(int num) {
  if (num == 0) {
    return _printzero();
  } else {
    int count = 0, *count_ptr = NULL;
    count_ptr = &count; 
    return _printnumbase(num, count_ptr, 10);
  }
}
