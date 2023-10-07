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
          if (format[i + 1] == 's') {
            printed_chars += _handle_s(va_arg(args, char *));
            i += 2;
          }
          else if (format[i + 1] == '%') {
            _putchar('%');
            printed_chars += 1;
            i += 2;
          } else {
            int result = handle_int_specifiers(va_arg(args, int), format[i + 1]);
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
