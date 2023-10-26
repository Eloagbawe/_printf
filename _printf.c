#include <stdio.h>
#include <stdarg.h>
#include "_printf.h"

/**
 * _printf - prints to standard output according to a specifier
 * format - The string + specifier to be printed
 * Return - No of characters printed
*/
int _printf(const char *format, ...) {
  va_list args;
  int printed_chars = 0, i = 0;
  va_start(args, format);

  while (format[i] != '\0') {
    if (format[i] == '%') {
      char specifier = format[i + 1];
      if (specifier == 's' || specifier == 'S') {
        printed_chars += handle_char_specifiers(va_arg(args, char *), specifier);
        i += 2;
      }
      else if (specifier == 'p') {
        printed_chars += handle_long_int_specifiers(va_arg(args, unsigned long int), specifier);
        i += 2;
      }
      else if (specifier == '%') {
        _putchar('%');
        printed_chars += 1;
        i += 2;
      } else {
        int result = handle_int_specifiers(va_arg(args, int), specifier);
        printed_chars += result;
        if (result == 0) {
          i += 1;
        } else {
          i += 2;
        }
      }
    } else {
      _putchar(format[i]);
      i += 1;
      printed_chars += 1;
    }
  }
  va_end(args);
  return printed_chars;
}
