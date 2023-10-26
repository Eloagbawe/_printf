#include "_printf.h"

/**
 * check_non_printable - checks if a character is non printable
 * @c: char
 * Return: 1 if true and 0 if false
*/

int check_non_printable(int c) {
  if ((c > 0 && c < 32) || (c >= 127)) {
      return 1;
  } else {
      return 0;
  }
}
