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
 * _handle_b - handles the b specifier
 * @num: number to print
 * Return: num of characters printed
*/

int _handle_b(int num) {
  if (num == 0) {
    return _printzero();
  } else {
    unsigned int x;
    int count = 0, *count_ptr = NULL;
    count_ptr = &count; 
    x = (unsigned int)num;
    return _printnumbase(x, count_ptr, 2);
  }
}
