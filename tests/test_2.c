#include <stdio.h>
#include <limits.h>

int main() {
  // tests for %d, %i
  long int l;
  _printf("%d", 1024);
  _printf("%d", -1024);
  _printf("%d", 0);
  _printf("%d", INT_MAX);
  _printf("%d", INT_MIN);

  //l = INT_MAX
  //l += 1024;
  _printf("%d", l); //where l is a long int equals to INT_MAX + 1024

  //l = INT_MIN
  //l -= 1024;
  _printf("%d", l); //where l is a long int equals to INT_MIN - 1024

  _printf("There is %d bytes in %d KB\n", 1024, 1);

  _printf("%d - %d = %d\n", 1024, 2048, -1024);

  _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

  _printf("%i", 1024);

  _printf("%i", -1024);

  _printf("%i", 0);

  _printf("%i", INT_MAX);

  _printf("%i", INT_MIN);

  //l = INT_MAX
  //l += 1024;
  _printf("%i", l); //where l is a long int equals to INT_MAX + 1024

  //l = INT_MIN
  //l -= 1024;
  _printf("%i", l); //where l is a long int equals to INT_MIN - 1024

  _printf("There is %i bytes in %i KB\n", 1024, 1);

  _printf("%i - %i = %i\n", 1024, 2048, -1024);

  _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

  _printf("%d == %i\n", 1024, 1024);

  _printf("iddi%diddiiddi\n", 1024);

  _printf("%d", 10000);

  _printf("%i", 10000);

}