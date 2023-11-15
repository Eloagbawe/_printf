#include "_printf.h"
#include <stdio.h>
#include <stdint.h>

/**
 * _handle_p - handles the p specifier
 * @add: address to print
 * Return: num of characters printed
*/

int _handle_p(unsigned long int add) {
  int printed = 0;
  uintptr_t address_as_uint = (uintptr_t)add;

  printed += _printstr("0x");

  if (address_as_uint == 0) {
    return printed + _printzero();
  } else {
    int count = 0, *count_ptr = NULL;
    count_ptr = &count;
    return printed + _printhexa(address_as_uint, count_ptr);
  }
}
