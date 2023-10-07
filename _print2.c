#include "_printf.h"
/**
 * _printnumbase- prints a number
 * @num: number to be printed
 * @int: pointer to keep count of printed numbers
 * Return: length of number printed
*/

int _printnumbase(long int num, int* i, int base) {
  long int x;

  if (num < 0) {
      num *= -1;
      _putchar('-');
      *i += 1;
  }
  x = num;
  if (num > 0) {
      *i += 1;
      _printnumbase(num / base, i, base);
      _putchar(48 + (x % base));
  }
  return *i;
}

/**
 * _printzero - prints zero
 * Return: length of number printed
*/

int _printzero(void) {
  _putchar(48);
  return 1;
}

/**
 * _printhexa - prints a number in base 16
 * @num: number to be printed
 * Return: length of number printed
*/

int _printhexa(long int num, int* i) {
  if (num > 0) {
      *i += 1;
      _printhexa(num / 16, i);
      switch(num % 16){
        case(10):
          _putchar('a');
          break;
        case(11):
          _putchar('b');
          break;
        case(12):
          _putchar('c');
          break;
        case(13):
          _putchar('d');
          break;
        case(14):
          _putchar('e');
          break;
        case(15):
          _putchar('f');
          break;
        default:
          _putchar(48 + (num % 16));
          break;
      }
  }
  return *i;
}

/**
 * _printHexa - prints a number in base 16
 * @num: number to be printed
 * Return: length of number printed
*/

int _printHexa(long int num, int* i) {
  if (num > 0) {
      *i += 1;
      _printHexa(num / 16, i);
      switch(num % 16){
        case(10):
          _putchar('A');
          break;
        case(11):
          _putchar('B');
          break;
        case(12):
          _putchar('C');
          break;
        case(13):
          _putchar('D');
          break;
        case(14):
          _putchar('E');
          break;
        case(15):
          _putchar('F');
          break;
        default:
          _putchar(48 + (num % 16));
          break;
      }
  }
  return *i;
}
