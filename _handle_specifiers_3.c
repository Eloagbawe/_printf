#include "_printf.h"
#include <stdio.h>
/**
 * _handle_S - handles the S specifier
 * @num: number to print
 * Return: num of characters printed
*/

int _handle_S(char* string) {
  if (string == NULL) {
    return _printnull();
  } else {
    return _printStr(string);
  }
}
