#include <unistd.h>
#include <stdio.h>
#include "_printf.h"

/**
 * _putchar - prints a character
 * @c: character to be printed
 * Return: void
*/
void _putchar(int c) {
  write(1, &c, 1);
}

/**
 * _strlen - outputs the length of a string
 * @str: string to be evaluated
 * Return: length of the string
*/
int _strlen(const char *str) {
  int i = 0;

  while (str[i] != '\0') {
    i++;
  }
  return i;
}

/**
 * _printstr - prints a string
 * @s: string to be printed
 * Return: number of chars printed
*/

int _printstr(const char *s) {
  int i, len;
  char buffer[1024];
  size_t buffer_size = sizeof(buffer);
  size_t dataSize = 0;
  
  len = _strlen(s);

  for (i = 0; i < len; i++) {

    if (dataSize < buffer_size) {
      buffer[dataSize++] = s[i];
    } else {
      write(1, buffer, dataSize);
      dataSize = 0;
      buffer[dataSize++] = s[i];
    }
  }

  if (dataSize > 0) {
    write(1, buffer, dataSize);
  }
  return len;
}

/**
 * _printnum - prints a number
 * @num: number to be printed
 * Return: length of number printed
*/

int _printnum(long int num, int* i) {
  long int x;

  if (num < 0) {
    num *= -1;
    _putchar('-');
    *i += 1;
  }
  x = num;
  if (num > 0) {
    *i += 1;
    _printnum(num / 10, i);
    _putchar(48 + (x % 10));
  }
  return *i;
}


/**
 * _printnull - prints null
 * Return: number of chars printed
*/

int _printnull(void) {
  return _printstr("(null)");
}
