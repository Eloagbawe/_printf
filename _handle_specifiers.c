#include "_printf.h"
#include <stdio.h>

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
