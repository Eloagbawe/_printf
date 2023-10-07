#include "_printf.h"
#include <stdio.h>

/**
 * _handle_u - handles the u specifier
 * @num: number to print
 * Return: num of characters printed
*/

int _handle_u(int num) {
  if (num == 0) {
    return _printzero();
  } else {
    unsigned int x;
    int count = 0, *count_ptr = NULL;
    count_ptr = &count; 
    x = (unsigned int)num;
    return _printnum(x, count_ptr);
  }
}

/**
 * _handle_o - handles the o specifier
 * @num: number to print
 * Return: num of characters printed
*/

int _handle_o(int num) {
  if (num == 0) {
    return _printzero();
  } else {
    unsigned int x;
    int count = 0, *count_ptr = NULL;
    count_ptr = &count; 
    x = (unsigned int)num;
    return _printnumbase(x, count_ptr, 8);
  }
}


/**
 * _handle_x - handles the x specifier
 * @num: number to print
 * Return: num of characters printed
*/

int _handle_x(int num) {
  if (num == 0) {
    return _printzero();
  } else {
    unsigned int x;
    int count = 0, *count_ptr = NULL;
    count_ptr = &count;
    x = (unsigned int)num;
    return _printhexa(x, count_ptr);
  }
}

/**
 * _handle_X - handles the x specifier
 * @num: number to print
 * Return: num of characters printed
*/

int _handle_X(int num) {
  if (num == 0) {
    return _printzero();
  } else {
    unsigned int x;
    int count = 0, *count_ptr = NULL;
    count_ptr = &count;
    x = (unsigned int)num;
    return _printHexa(x, count_ptr);
  }
}

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
