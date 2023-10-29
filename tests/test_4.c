#include <stdio.h>
#include <limits.h>

int main() {
  // tests for %u, %o, %x, %X
  long int l;
  long int res;

  _printf("%u", 1024);
  _printf("%u", -1024);
  _printf("%u", 0);
  _printf("%u", UINT_MAX);

  l = UINT_MAX;
  l += 1024;

  _printf("%u", l);
  _printf("There is %u bytes in %u KB\n", 1024, 1);
  _printf("%u - %u = %u\n", 2048, 1024, 1024);

  res = INT_MAX;
  res *= 1024;

  _printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);


  _printf("%o", 1024);
  _printf("%o", -1024);
  _printf("%o", 0);
  _printf("%o", UINT_MAX);
  _printf("%o", l);
  _printf("There is %o bytes in %o KB\n", 1024, 1);
  _printf("%o - %o = %o\n", 2048, 1024, 1024);
  _printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);


  _printf("%x", 1024);
  _printf("%x", -1024);
  _printf("%x", 0);
  _printf("%x", UINT_MAX);
  _printf("%x", l);
  _printf("There is %x bytes in %x KB\n", 1024, 1);
  _printf("%x - %x = %x\n", 2048, 1024, 1024);
  _printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);

  _printf("%X", 1024);
  _printf("%X", -1024);
  _printf("%X", 0);
  _printf("%X", UINT_MAX);
  _printf("%X", l);
  _printf("There is %X bytes in %X KB\n", 1024, 1);
  _printf("%X - %X = %X\n", 2048, 1024, 1024);
  _printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);
  _printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);

  _printf("uuoxxX%xuoXo\n", 1024);

  return 0;
}
