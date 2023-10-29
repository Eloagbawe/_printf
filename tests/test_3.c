#include <stdio.h>
#include <limits.h>

int main() {
  // tests for %b
 long int l;
  long int res;

  _printf("%b\n", 1024);
  _printf("%b\n", -1024);
  _printf("%b\n", 0);
  _printf("%b\n", UINT_MAX);

  l = UINT_MAX;
  l += 1024;

  _printf("%b\n", l);
  _printf("There is %b bytes in %b KB\n", 1024, 1);
  _printf("%b - %b = %b\n", 2048, 1024, 1024);

  res = INT_MAX;
  res *= 1024;
  _printf("%b + %b = %b\n", INT_MAX, INT_MAX, res);

  return 0;
}
